#include <iostream>
#include "Cliente.h"

Cliente::Cliente(const string& nombre, int edad, const string& telefono)
    : Persona(nombre, edad, telefono), numDeOrdenes(0) {}

void Cliente::incrementarOrdenes() {
    numDeOrdenes++;
}

int Cliente::getNumDeOrdenes() const {
    return numDeOrdenes;
}