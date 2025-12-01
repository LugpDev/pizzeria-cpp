#include "Producto.h"

Producto::Producto(){
    nombre = "";
    precio = 0.0;
    estado = "";
}

Producto::Producto(const string& nombre, float precio, string estado)
     : nombre(nombre), precio(precio), estado(estado) {}

string Producto::getNombre() const {
    return nombre;
}

float Producto::getPrecio() const {
    return precio;
}

string Producto::getEstado() const {
    return estado;
}
