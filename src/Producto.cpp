#include "Producto.h"

Producto::Producto()
{
    nombre = "";
    precio = 0.0;
    estado = "";
}

Producto::Producto(string _nombre, float _precio)
    : nombre(_nombre), precio(_precio), estado("pedido") {}

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
