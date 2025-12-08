#include "Producto.h"
#include <cassert>
#include <iostream>

int main()
{
  Producto producto1("Producto de prueba", 120.5);

  assert(producto1.getNombre() == "Producto de prueba");
  assert(producto1.getPrecio() == 120.5);
  assert(producto1.getEstado() == "pedido");

  producto1.setPrecio(150.0);
  assert(producto1.getPrecio() == 150.0);

  cout << "Pruebas de Producto pasadas exitosamente." << endl;
}