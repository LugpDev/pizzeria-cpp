#ifndef _MESERO_H_
#define _MESERO_H_
#include <string>
using namespace std;
#include "Empleado.h"
#include "Bebida.h"

Class Mesero : public Empleado
{
private:
    int bebidasPreparadas;
public:
    int getBebidasPreparadas();
    void PrepararBebida(Bebida:bebida);
    Mesero();
};

#endif