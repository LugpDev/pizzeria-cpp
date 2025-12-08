#include "Bebida.h"

#include <cassert>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    Bebida bebida1("boing mango", 15.0, "chico");
    assert(bebida1.getEstado() == "pedido");
    bebida1.servir();
    assert(bebida1.getEstado() == "servido");
    assert(bebida1.getNombre() == "boing mango");
    assert(bebida1.getPrecio() == 15.0);
    assert(bebida1.getTamanioVaso() == "chico");

    cout << "Pruebas de Bebida pasadas exitosamente." << endl;
}
