#include "Pedido.h"

Pedido::Pedido() {}
Pedido::Pedido(int _id, Cliente _cliente)
{
    id = _id;
    estado = "registrado";
    cliente = _cliente;
    pagado = false;
}

void Pedido::añadirProducto(Producto producto)
{
    productos.push_back(producto);
}

void Pedido::calcularTotal()
{
    float total = 0.0;
    for (Producto producto : productos)
    {
        total += producto.getPrecio();
    }
    cout << "Total del pedido: " << total << endl;
}

void Pedido::pagar(float pago)
{
    float total = 0.0;
    for (Producto producto : productos)
    {
        total += producto.getPrecio();
    }

    if (pago >= total)
    {
        pagado = true;
        cout << "Pago realizado con éxito." << endl;
    }
    else
    {
        cout << "Pago insuficiente." << endl;
    }
}

string Pedido::getEstado()
{
    return estado;
}
bool Pedido::getPagado()
{
    return pagado;
}
int Pedido::getId()
{
    return id;
}

vector<Producto> Pedido::getProductos()
{
    return productos;
}
void Pedido::setEstado(string _estado)
{
    estado = _estado;
}
void Pedido::setPagado(bool _pagado)
{
    pagado = _pagado;
}
void Pedido::setId(int _id)
{
    id = _id;
}
void Pedido::setProductos(vector<Producto> _productos)
{
    productos = _productos;
}

Cliente Pedido::getCliente()
{
    return cliente;
}