#include "GestorPedidos.h"
#include "Cliente.h"
#include "Pizza.h"
#include "Bebida.h"
#include "Ingrediente.h"
#include <cassert>

int main()
{
  GestorPedidos gestor;

  Cliente cliente("Luis", 18, "555-1234");

  Ingrediente ingrediente1("Queso", 1.0);

  Pizza pizza1("Margarita", "mediana", {ingrediente1});
  Bebida bebida1("Coca-Cola", 2.5, "mediana");

  Pedido pedido1(1, cliente);
  pedido1.añadirProducto(pizza1);
  pedido1.añadirProducto(bebida1);

  // Registrar el pedido
  gestor.registrarPedido(pedido1);

  assert(gestor.getPedidos().size() == 1);

  // Eliminar el pedido
  gestor.eliminarPedido(1);
  assert(gestor.getPedidos().size() == 0);

  // Entregar el pedido
  gestor.registrarPedido(pedido1);
  gestor.entregarPedido(1);
  assert(gestor.getPedido(1).getEstado() == "entregado");

  // Encontrar el pedido
  Pedido encontrado = gestor.getPedido(1);
  assert(encontrado.getId() == 1);

  cout << "Todos los tests de Gestor de Pedidos pasaron exitosamente." << endl;

  return 0;
}