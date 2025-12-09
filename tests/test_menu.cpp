#include "Menu.h"
#include "cassert"
#include <iostream>

using namespace std;

int main()
{
  Menu menu;
  Pizza pizza1("Margarita", "Mediana", {Ingrediente("Tomate", 10.2), Ingrediente("Queso", 5.0)});
  Bebida bebida1("Coca-Cola", 15.0, "mediano");

  // Agregar pizza  y bebida
  menu.agregarPizza(pizza1);
  menu.agregarBebida(bebida1);
  vector<Pizza> pizzas = menu.getPizzas();
  vector<Bebida> bebidas = menu.getBebidas();
  assert(pizzas.size() == 1);
  assert(pizzas[0].getNombre() == "Margarita");
  assert(bebidas.size() == 1);
  assert(bebidas[0].getNombre() == "Coca-Cola");

  // Actualizar pizza y bebida
  Pizza pizza2("Pepperoni", "Grande", {Ingrediente("Tomate", 12.0), Ingrediente("Queso", 6.0), Ingrediente("Pepperoni", 8.0)});
  Bebida bebida2("Sprite", 14.0, "grande");
  menu.actualizarPizza("Margarita", pizza2);
  menu.actualizarBebida("Coca-Cola", bebida2);
  pizzas = menu.getPizzas();
  bebidas = menu.getBebidas();
  assert(pizzas[0].getNombre() == "Pepperoni");
  assert(bebidas[0].getNombre() == "Sprite");

  // Eliminar pizza y bebida
  menu.eliminarPizza("Pepperoni");
  menu.eliminarBebida("Sprite");
  pizzas = menu.getPizzas();
  bebidas = menu.getBebidas();
  assert(pizzas.size() == 0);
  assert(bebidas.size() == 0);

  cout << "Todos los tests de Menu pasaron exitosamente" << endl;

  return 0;
}