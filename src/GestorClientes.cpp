#include "GestorClientes.h"

GestorClientes::GestorClientes() {}
void GestorClientes::agregarCliente(Cliente cliente)
{
    clientes.push_back(cliente);
}

vector<Cliente> GestorClientes::getClientes()
{
    return clientes;
}
