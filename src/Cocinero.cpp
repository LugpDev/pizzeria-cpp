#include <string>
#include "Empleado.h"
using namespace std;
#include "Pizza.h"
#include "Cocinero.h"

Cocinero::Cocinero() {};
Cocinero::Cocinero(string _nombre, int _edad, string _telefono, int _id) : Empleado(_nombre, _edad, _telefono, _id)
{
    pizzasPreparadas = 0;
}

int Cocinero::getPizzasPreparadas()
{
    return pizzasPreparadas;
}

void Cocinero::prepararPizza(Pizza &pizza)
{
    pizza.amasar();
    pizza.ponerIngredientes();
    pizza.hornear();
    pizzasPreparadas++;
}