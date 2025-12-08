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
    Producto(string _nombre, float _precio, string _estado);

    string getNombre();
    float getPrecio();
    string getEstado();
};

#endif // PRODUCTO_H