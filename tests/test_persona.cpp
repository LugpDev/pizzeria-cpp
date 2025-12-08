#include "Persona.h"
#include <cassert>
#include <iostream>

using namespace std;

int main()
{
  Persona persona("Diana", 18, "7893213");

  assert(persona.getNombre() == "Diana");
  assert(persona.getEdad() == 18);
  assert(persona.getTelefono() == "7893213");

  cout << "Pruebas de Persona pasadas exitosamente." << endl;
}