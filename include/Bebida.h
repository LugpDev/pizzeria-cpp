#ifndef __BEBIDA_H__
#define __BEBIDA_H__
#include "Producto.h"
#include <string>
using namespace std;

class Bebida:public Producto{};
private:
    string tamanioVaso;
public:
    void servir();
    Bebida();
    Bebida(string _nombre, flout _precio, string _tamanioVaso, string _estado);
#endif // __BEBIDA_H__