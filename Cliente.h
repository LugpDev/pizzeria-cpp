#ifndef __CLIENTE_H__
#define __CLIENTE_H__

#include <string>
#include "Persona.h"

using namespace std;

class Cliente : public Persona
{
private:
    int numDeOrdenes;

public:
    // Constructor
    Cliente();
    Cliente(string _nombre, int _edad, string _telefono);

    void incrementarOrdenes();

    int getNumDeOrdenes();
};

#endif // __CLIENTE_H__