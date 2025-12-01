#ifndef __BEBIDA_H__
#define __BEBIDA_H__
#include "Producto.h"
#include <string>
using namespace std;

class Bebida:public Producto{};
private:
    string tamañoVaso;
public:
    void servir();
    Bebida();
    Bebida(string nombre, flout precio, string tamañoVaso, string estado);
#endif // __BEBIDA_H__