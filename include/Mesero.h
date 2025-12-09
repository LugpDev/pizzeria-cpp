#ifndef _MESERO_H_
#define _MESERO_H_
#include <string>
using namespace std;
#include "Empleado.h"
#include "Bebida.h"

class Mesero : public Empleado
{
private:
    int bebidasPreparadas;

public:
    int getBebidasPreparadas();
    void prepararBebida(Bebida &bebida);
    Mesero();
    Mesero(string _nombre, int _edad, string _telefono, int _id);
};

#endif