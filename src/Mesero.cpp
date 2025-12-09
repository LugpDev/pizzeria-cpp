using namespace std;
#include "Mesero.h"
#include "Empleado.h"
#include <string>

Mesero::Mesero() {};

Mesero::Mesero(string _nombre, int _edad, string _telefono, int _id) : Empleado(_nombre, _edad, _telefono, _id)
{
    bebidasPreparadas = 0;
}

int Mesero::getBebidasPreparadas()
{
    return bebidasPreparadas;
}
void Mesero::prepararBebida(Bebida bebida)
{
    bebida.servir();
}
