#include <string>
#include "Empleado.h"
using namespace std;
#include "Pizza.h"
#include "Cocinero.h"

Cocinero::Cocinero() : Empleado() {
    pizzasPreparadas = 0;
}
int Cocinero::getPizzasPreparadas() {
    return pizzasPreparadas;
}
void Cocinero::PrepararPizza(Pizza& pizza) {
    pizza.cocinar();
    pizzasPreparadas++;
}