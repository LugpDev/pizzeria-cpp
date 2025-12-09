#include <cassert>
#include <string>
#include <iostream>
#include "Mesero.h"
using namespace std;

int main()
{
    Mesero mesero1;
    assert(mesero1.getBebidasPreparadas() == 0);

    Bebida bebida1("Coca Cola", 20.0, "grande");
    assert(bebida1.getEstado() == "pedido");

    mesero1.prepararBebida(bebida1);
    assert(bebida1.getEstado() == "servido");

    cout << "Pruebas de Mesero pasadas exitosamente." << endl;
}