#include "GestorEmpleados.h"
#include "Mesero.h"
#include "Cocinero.h"
#include <cassert>
#include <iostream>

using namespace std;

int main()
{
  GestorEmpleados gestor;
  Mesero emp1("Juan Perez", 30, "555-1234", 1);
  Cocinero emp2("Ana Gomez", 25, "555-5678", 2);

  // Contratar empleados
  gestor.contratar(emp1);
  gestor.contratar(emp2);
  vector<Empleado> empleados = gestor.getEmpleados();
  assert(empleados.size() == 2);
  assert(empleados[0].getId() == 1);
  assert(empleados[1].getId() == 2);

  // Despedir un empleado
  gestor.despedir(1);
  empleados = gestor.getEmpleados();
  assert(empleados.size() == 1);
  assert(empleados[0].getId() == 2);

  cout << "Pruebas de Gestor de Empleados pasadas exitosamente." << endl;

  return 0;
}