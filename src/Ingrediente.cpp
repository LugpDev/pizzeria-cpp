#include "Ingrediente.h"
#include <string>
using namespace std;

Ingrediente::Ingrediente(const string& nombre, float costo) : nombre(nombre), costo(costo) {}
string Ingrediente::getNombre() const {
    return nombre;
}
float Ingrediente::getCosto() const {
    return costo;
}