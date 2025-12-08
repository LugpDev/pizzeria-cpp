#include "Empleado.h"

Empleado::Empleado() {}
Empleado::Empleado(string _nombre, int _edad, string _telefono, int _id)
    : Persona(_nombre, _edad, _telefono)
{
    id = _id;
}

int Empleado::getId()
{
    return id;
}
