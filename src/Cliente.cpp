#include <string>
#include "Cliente.h"

using namespace std;

Cliente::Cliente() {};
Cliente::Cliente(string _nombre, int _edad, string _telefono)
    : Persona(_nombre, _edad, _telefono)
{
    numDeOrdenes = 0;
};

void Cliente::incrementarOrdenes()
{
    numDeOrdenes++;
};

int Cliente::getNumDeOrdenes()
{
    return numDeOrdenes;
};