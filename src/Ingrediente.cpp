#include "Ingrediente.h"
#include <string>
using namespace std;

Ingrediente::Ingrediente() {};
Ingrediente::Ingrediente(string _nombre, float _costo) : nombre(_nombre), costo(_costo) {}

string Ingrediente::getNombre()
{
    return nombre;
}
float Ingrediente::getCosto()
{
    return costo;
}