using namespace std;
#include "Mesero.h"
#include <string>

Mesero::Mesero() : Empleado() {
    bebidasPreparadas = 0;
}

int Mesero::getBebidasPreparadas() {
    return bebidasPreparadas;
}
void Mesero::PrepararBebida(Bebida:bebida) {
    bebida.servir();
    
}
Mesero::Mesero(string nombre, int edad, string telefono, int id)
{
    nombre = nombre;
    edad = edad;
    telefono = telefono;
    id = id;
    bebidasPreparadas = 0;
}