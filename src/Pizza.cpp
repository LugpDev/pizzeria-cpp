#include "Pizza.h"
#include <string>
#include <iostream>

using namespace std;

Pizza::Pizza() {};

Pizza::Pizza(string nombre, const string &tamaño, vector<Ingrediente> ingredientes) : tamaño(tamaño), ingredientes(ingredientes), Producto(nombre, 0.0)
{
    for (Ingrediente ingrediente : ingredientes)
    {
        precio += ingrediente.getCosto();
    }
}

void Pizza::Amasar()
{
    if (estado == "pedido")
    {
        estado = "amasado";
    }
}

void Pizza::ponerIngrediente()
{
    if (estado == "amasado")
    {
        estado = "ingredientes agregados";
    }
}

void Pizza::Hornear()
{
    if (estado == "ingredientes agregados")
    {
        estado = "listo";
    }
}

string Pizza::getTamaño() const
{
    return tamaño;
}