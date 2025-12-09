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

void testDeFuncionalidad()
{
  Cliente cliente1("Juan Perez", 30, "555-1234");
  Pedido pedido(1, cliente1);
  Producto producto1("Producto de prueba", 120.5);
  Producto producto2("Producto de prueba2", 122.5);

  pedido.añadirProducto(producto1);
  pedido.añadirProducto(producto2);

  vector<Producto> productos = pedido.getProductos();
  assert(productos.size() == 2);
  assert(productos[0].getNombre() == "Producto de prueba");
  assert(productos[1].getNombre() == "Producto de prueba2");
  assert(abs(pedido.calcularTotal() - 243.0) < 0.01);
}

int main()
{
  testDelConstructor();

  cout << "Pruebas de Pedido pasadas exitosamente." << endl;
  return 0;
}