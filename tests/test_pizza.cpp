#include "Pizza.h"
#include "Ingrediente.h"
#include "cassert"
#include <iostream>
using namespace std;

void testPizza()
{
    vector<Ingrediente> ingredientes1 = {Ingrediente("Tomate", 10.2), Ingrediente("Queso", 5.0), Ingrediente("Albahaca", 3.0)};

    Pizza pizza1("Margarita", "Mediana", ingredientes1);

    assert(pizza1.getNombre() == "Margarita");
    assert(pizza1.getTamaño() == "Mediana");
    assert(abs(pizza1.getPrecio() - 18.2) < 0.01);
    assert(pizza1.getEstado() == "pedido");

    pizza1.Amasar();
    assert(pizza1.getEstado() == "amasado");

    pizza1.ponerIngrediente();
    assert(pizza1.getEstado() == "ingredientes agregados");

    pizza1.Hornear();
    assert(pizza1.getEstado() == "listo");

    pizza1.Amasar();
    assert(pizza1.getEstado() == "listo");

    cout
        << "Todos los tests de Pizza pasaron exitosamente." << endl;
}

int main()
{
    testPizza();
    return 0;
}