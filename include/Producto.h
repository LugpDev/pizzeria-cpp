#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
using namespace std;

class Producto {
protected:
    string nombre;
    float precio;
    string estado;

public:
    Producto();
    Producto(const string& nombre, float precio, string estado);
    string getNombre() const;
    float getPrecio() const;
    string getEstado() const;
};

#endif // PRODUCTO_H