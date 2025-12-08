#include "Empleado.h"
#include <cassert>

using namespace std;

int main()
{
  Empleado empleado("Carlos", 18, "7123", 101);
  assert(empleado.getId() == 101);

  cout << "Pruebas de Empleado pasadas exitosamente." << endl;
  return 0;
}