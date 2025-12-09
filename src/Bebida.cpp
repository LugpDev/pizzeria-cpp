#include "Producto.h"
#include <string>
using namespace std;
#include "Bebida.h"

void Bebida::servir()
{
    estado = "servido";
};
Bebida::Bebida()
{
    nombre = "";
    precio = 0.0;
    estado = "";
    tamanioVaso = "";
};

Bebida::Bebida(string _nombre, float _precio, string _tamanioVaso) : Producto(_nombre, _precio)
{
    tamanioVaso = _tamanioVaso;
}

string Bebida::getTamanioVaso()
{
    return tamanioVaso;
}
