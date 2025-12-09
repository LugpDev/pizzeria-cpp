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

void Pizza::amasar()
{
    if (estado == "pedido")
    {
        cout << "Amasando la pizza..." << endl;
        estado = "amasado";
    }
}

void Pizza::ponerIngredientes()
{
    if (estado == "amasado")
    {
        cout << "Agregando ingredientes..." << endl;
        estado = "ingredientes agregados";
    }
}

void Pizza::hornear()
{
    if (estado == "ingredientes agregados")
    {
        cout << "Horneando la pizza..." << endl;
        estado = "listo";
    }
}

string Pizza::getTamaño() const
{
    return tamaño;
}