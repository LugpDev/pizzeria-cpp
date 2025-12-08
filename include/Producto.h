#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
using namespace std;

class Producto
{
protected:
    string nombre;
    float precio;
    string estado;

public:
    Producto();
    Producto(string _nombre, float _precio);

    string getNombre();
    float getPrecio();
    string getEstado();

    void setPrecio(float _precio);
};

#endif // PRODUCTO_H