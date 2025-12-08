#include "Pedido.h"
#include "cassert"
#include <iostream>

using namespace std;

void testDelConstructor()
{
  Cliente cliente1("Juan Perez", 30, "555-1234");
  Pedido pedido(1, cliente1);

  assert(pedido.getId() == 1);
  assert(pedido.getEstado() == "registrado");
  assert(!pedido.getPagado());
  assert(pedido.getCliente().getNombre() == "Juan Perez");
}

int main()
{
  testDelConstructor();

  cout << "Pruebas de Pedido pasadas exitosamente." << endl;
  return 0;
}