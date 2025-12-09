#include "Pizzeria.h"

int main()
{
  Pizzeria pizzeria;
  pizzeria.mostrarOpciones();
  int opcion;

  std::cout << "Ingrese una opcion: ";
  std::cin >> opcion;
  do
  {
    pizzeria.ejecutarOpcion(opcion);
    pizzeria.mostrarOpciones();
    std::cout << "Ingrese una opcion: ";
    std::cin >> opcion;
  } while (opcion != 0);

  return 0;
}