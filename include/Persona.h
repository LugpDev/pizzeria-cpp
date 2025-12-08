#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;

class Persona
{
private:
    string nombre;
    int edad;
    string telefono;

public:
    // Constructor
    Persona();
    Persona(string nombre, int edad, string telefono);

    // Getters
    string getNombre();
    int getEdad();
    string getTelefono();
};
#endif