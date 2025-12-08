#include "Pizza.h"
#include <string>
using namespace std;

Pizza::Pizza(const string &tamaño) : tamaño(tamaño) {}

string Pizza::getTamaño() const
{
    return tamaño;
}

void Pizza::Amasar()
{
    estado = "Amasado";
}

void Pizza::ponerIngrediente()
{
    if (estado == "Amasado")
    {
        estado = "Ingrediente agregado";
    }
}

void Pizza::Hornear()
{
    estado = "Horneado";
}