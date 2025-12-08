#include "Cliente.h"

#include <cassert>
#include <string>
#include <iostream>

using namespace std;

int main()
{
  Cliente cliente("Juan", 30, "555-1234");

  assert(cliente.getNumDeOrdenes() == 0);
  cliente.incrementarOrdenes();
  assert(cliente.getNumDeOrdenes() == 1);

  cout << "Pruebas de Cliente pasadas exitosamente." << endl;
}
