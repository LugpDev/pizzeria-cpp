#include "GestorPedidos.h"

GestorPedidos::GestorPedidos() {};

void GestorPedidos::registrarPedido(Pedido pedido)
{
  pedidos.push_back(pedido);
};

void GestorPedidos::eliminarPedido(int id)
{
  for (size_t i = 0; i < pedidos.size(); i++)
  {
    if (pedidos[i].getId() == id)
    {
      pedidos.erase(pedidos.begin() + i);
      break;
    }
  }
};

void GestorPedidos::entregarPedido(int id)
{
  for (size_t i = 0; i < pedidos.size(); i++)
  {
    if (pedidos[i].getId() == id)
    {
      pedidos[i].setEstado("entregado");
      break;
    }
  }
};

Pedido GestorPedidos::getPedido(int id)
{
  for (size_t i = 0; i < pedidos.size(); i++)
  {
    if (pedidos[i].getId() == id)
    {
      return pedidos[i];
    }
  }
  return Pedido();
};

vector<Pedido> GestorPedidos::getPedidos()
{
  return pedidos;
};