#ifndef CLIENTE.H
#define CLIENTE.H

#include <string>
#include "Persona.h"

using namespace std;

class Cliente: public Persona {
private:
    int numDeOrdenes;

public:
    // Constructor
    Cliente(string nombre, int edad, string telefono)
        : Persona(nombre, edad, telefono), numDeOrdenes(0) {}

    void incrementarOrdenes();

    int getNumDeOrdenes() const;

};
#endif