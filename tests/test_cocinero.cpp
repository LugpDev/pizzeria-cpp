#include "Cocinero.h"
#include <iostream>
#include <cassert>

using namespace std;

int main()
{
  Cocinero chef1("Carlos", 30, "555-1234", 1);
  assert(chef1.getPizzasPreparadas() == 0);

  vector<Ingrediente> ingredientes = {Ingrediente("Queso", 1.5), Ingrediente("Tomate", 0.5)};
  Pizza pizza1("Margarita", "Mediana", ingredientes);

  chef1.prepararPizza(pizza1);
  assert(chef1.getPizzasPreparadas() == 1);
  assert(pizza1.getEstado() == "listo");

  cout << "Pruebas de Cocinero pasadas exitosamente." << endl;
}