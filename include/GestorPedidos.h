#ifndef __GESTORPEDIDOS_H__
#define __GESTORPEDIDOS_H__

#include <vector>
#include "Pedido.h"

class GestorPedidos
{
private:
  vector<Pedido> pedidos;

public:
  GestorPedidos();
  void registrarPedido(Pedido pedido);
  void eliminarPedido(int id);
  void entregarPedido(int id);
  Pedido getPedido(int id);
  vector<Pedido> getPedidos();
};

#endif // __GESTORPEDIDOS_H__