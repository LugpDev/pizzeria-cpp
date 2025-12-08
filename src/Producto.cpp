#include "Producto.h"

Producto::Producto()
{
    nombre = "";
    precio = 0.0;
    estado = "";
}

Producto::Producto(string _nombre, float _precio, string _estado)
    : nombre(_nombre), precio(_precio), estado(_estado) {}

string Producto::getNombre()
{
    return nombre;
}

float Producto::getPrecio()
{
    return precio;
}

string Producto::getEstado()
{
    return estado;
}
