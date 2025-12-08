#include "Ingrediente.h"
#include <cassert>
#include <iostream>

using namespace std;

int main()
{
  Ingrediente queso("queso", 5.2);

  assert(queso.getNombre() == "queso");
  assert(queso.getCosto() == 5.2);

  cout << "Pruebas de Ingrediente pasadas exitosamente." << endl;
}