#ifndef __PEDIDO_H__
#define __PEDIDO_H__

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "Producto.h"
#include "Cliente.h"

class Pedido
{
private:
    int id;
    string estado;
    vector<Producto> productos;
    Cliente cliente;
    bool pagado;

public:
    Pedido();
    Pedido(int _id, string _estado, Cliente _cliente);
    void añadirProducto(Producto producto);
    void calcularTotal();
    void pagar(float pago);

    string getEstado();
    bool getPagado();
    int getId();
    vector<Producto> getProductos();

    void setEstado(string _estado);
    void setPagado(bool _pagado);
    void setId(int _id);
    void setProductos(vector<Producto> _productos);
};
#endif // __PEDIDO_H__
