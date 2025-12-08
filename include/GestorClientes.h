#ifndef __GESTORCLIENTES_H__
#define __GESTORCLIENTES_H__

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "Cliente.h"

class GestorClientes
{
private:
    vector<Cliente> clientes;

public:
    GestorClientes();
    void agregarCliente(Cliente cliente);

    vector<Cliente> getClientes();
    void setClientes(vector<Cliente> _clientes);
};
#endif // __GESTORCLIENTES_H__