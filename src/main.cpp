#include "Pizzeria.h"
#include <iostream>

using namespace std;

int main()
{
  Pizzeria pizzeria("Pizzería de Toño");
  int opcion;

  do
  {
    pizzeria.mostrarOpciones();
    cin >> opcion;

    pizzeria.ejecutarOpcion(opcion);

  } while (opcion != 0);

  return 0;
}