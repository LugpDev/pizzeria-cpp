#include "Persona.h"

// Persona Constructor
Persona::Persona() {};
Persona::Persona(string nombre, int edad, string telefono)
    : nombre(nombre), edad(edad), telefono(telefono) {}

// GETTERS
string Persona::getNombre()
{
    return nombre;
}
int Persona::getEdad()
{
    return edad;
}
string Persona::getTelefono()
{
    return telefono;
}