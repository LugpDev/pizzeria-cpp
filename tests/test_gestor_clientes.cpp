#include <GestorClientes.h>
#include <Cliente.h>
#include <cassert>
#include <iostream>
using namespace std;

int main()
{
  GestorClientes gestor;
  Cliente cliente1("Diana", 29, "12312312");

  gestor.agregarCliente(cliente1);
  vector<Cliente> clientes = gestor.getClientes();
  assert(clientes.size() == 1);
  assert(clientes[0].getNombre() == "Diana");

  cout << "Pruebas de GestorClientes pasadas exitosamente." << endl;
  return 0;
}