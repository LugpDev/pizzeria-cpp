#ifndef __MENU_H__
#define __MENU_H__

#include "Pizza.h"
#include "Bebida.h"
#include <string>
#include <vector>

class Menu
{
private:
  vector<Pizza> pizzas;
  vector<Bebida> bebidas;

public:
  Menu();
  vector<Pizza> getPizzas();
  vector<Bebida> getBebidas();
  void agregarPizza(Pizza pizza);
  void agregarBebida(Bebida bebida);
  void actualizarPizza(string nombre, Pizza pizza);
  void actualizarBebida(string nombre, Bebida bebida);
  void eliminarPizza(string nombre);
  void eliminarBebida(string nombre);
};

#endif // __MENU_H__