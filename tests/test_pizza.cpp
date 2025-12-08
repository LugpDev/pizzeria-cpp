#include "Pizza.h"
#include "cassert"
#include <iostream>
using namespace std;

void testPizza() {
    Pizza pizza1("Margarita", 8.5, "Amasado", "Tomate, Queso, Albahaca", "Mediana");
    assert(pizza1.getNombre() == "Margarita");
    assert(pizza1.getPrecio() == 8.5);
    assert(pizza1.getEstado() == "Amasado");
    assert(pizza1.getIngredientes() == "Tomate, Queso, Albahaca");
    assert(pizza1.getTamanio() == "Mediana");

    Pizza pizza2("Pepperoni", 10.0, "Horneada", "Tomate, Queso, Pepperoni", "Grande");
    assert(pizza2.getNombre() == "Pepperoni");
    assert(pizza2.getPrecio() == 10.0);
    assert(pizza2.getEstado() == "Horneada");
    assert(pizza2.getIngredientes() == "Tomate, Queso, Pepperoni");
    assert(pizza2.getTamanio() == "Grande");

    cout << "Todos los tests de Pizza pasaron exitosamente." << endl;
}
int main() {
    testPizza();
    return 0;
}