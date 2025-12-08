#ifndef __EMPLEADO_H__
#define __EMPLEADO_H__

#include <iostream>
#include <string>
using namespace std;

#include "Persona.h"

class Empleado : public Persona
{
private:
    int id;

public:
    Empleado();
    Empleado(string _nombre, int _edad, string _telefono, int _id);

    int getId();
    void setId(int _id);
};

#endif // __EMPLEADO_H__