#ifndef __PIZZERIA_H__
#define __PIZZERIA_H__

#include <string>

#include "GestorClientes.h"
#include "GestorEmpleados.h"
#include "GestorPedidos.h"
#include "Menu.h"

using namespace std;

class Pizzeria
{
private:
  string nombre;
  GestorClientes gestorClientes;
  GestorEmpleados gestorEmpleados;
  GestorPedidos gestorPedidos;
  Menu menu;

public:
  Pizzeria();
  Pizzeria(string _nombre);

  void mostrarOpciones();
  void ejecutarOpcion(int opcion);
  string getNombre();
};

#endif // __PIZZERIA_H__