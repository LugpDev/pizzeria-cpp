#include "Pizzeria.h"
#include <string>
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

Pizzeria::Pizzeria() {};

Pizzeria::Pizzeria(string _nombre)
{
  nombre = _nombre;
  gestorClientes = GestorClientes();
  gestorEmpleados = GestorEmpleados();
  gestorPedidos = GestorPedidos();
  menu = Menu();
};

void Pizzeria::mostrarOpciones()
{
  cout << "=============================" << endl;
  cout << "Bienvenido a " << nombre << "!" << endl;
  cout << "Seleccione una opcion del menu:" << endl;
  cout << "0. Salir" << endl;
  cout << "========== Clientes =========" << endl;
  cout << "1. Agregar cliente" << endl;
  cout << "2. Mostrar clientes" << endl;
  cout << "=============================" << endl;
  cout << "========== Pedidos ==========" << endl;
  cout << "3. Registrar pedido" << endl;
  cout << "4. Eliminar pedido" << endl;
  cout << "5. Entregar pedido" << endl;
  cout << "6. Obtener pedido por ID" << endl;
  cout << "7. Mostrar pedidos" << endl;
  cout << "=============================" << endl;
  cout << "=========== Menu ============" << endl;
  cout << "8. Mostrar menu" << endl;
  cout << "9. Añadir pizza al menu" << endl;
  cout << "10. Añadir bebida al menu" << endl;
  cout << "11. Actualizar pizza" << endl;
  cout << "12. Actualizar bebida" << endl;
  cout << "13. Eliminar pizza del menu" << endl;
  cout << "14. Eliminar bebida del menu" << endl;
  cout << "=============================" << endl;
  cout << "========= Empleados =========" << endl;
  cout << "15. Contratar empleado" << endl;
  cout << "16. Despedir empleado" << endl;
  cout << "17. Mostrar empleados" << endl;
  cout << "=============================" << endl;
};

void Pizzeria::ejecutarOpcion(int opcion)
{
  // Clientes
  if (opcion == 1)
  {
    cout << "Ingrese los datos del nuevo cliente:" << endl;
    cout << "Nombre: ";
    string nombre;
    cin >> nombre;
    cout << "Edad: ";
    int edad;
    cin >> edad;
    cout << "Telefono: ";
    string telefono;
    cin >> telefono;
    Cliente nuevoCliente(nombre, edad, telefono);
    gestorClientes.agregarCliente(nuevoCliente);
    cout << "Cliente agregado exitosamente." << endl;
  }
  else if (opcion == 2)
  {
    vector<Cliente> clientes = gestorClientes.getClientes();

    cout << "Lista de clientes:" << endl;

    for (Cliente cliente : clientes)
    {
      cout << "Nombre: " << cliente.getNombre() << ", Edad: " << cliente.getEdad() << ", Telefono: " << cliente.getTelefono() << ", Numero de Ordenes: " << cliente.getNumDeOrdenes() << endl;
    }
  }

  // Pedidos
  else if (opcion == 3)
  {
    cout << "Ingrese los datos del nuevo pedido:" << endl;
    cout << "Nombre del cliente: ";
    string nombreCliente;
    cin >> nombreCliente;
    cout << "Edad del cliente: ";
    int edadCliente;
    cin >> edadCliente;
    cout << "Telefono del cliente: ";
    string telefonoCliente;
    cin >> telefonoCliente;
    Cliente cliente(nombreCliente, edadCliente, telefonoCliente);
    int idPedido = rand() % 1000;
    Pedido nuevoPedido(idPedido, cliente);
    gestorPedidos.registrarPedido(nuevoPedido);
    cout << "Pedido registrado exitosamente." << endl;
  }
  else if (opcion == 4)
  {
    cout << "Ingrese el ID del pedido a eliminar: ";
    int id;
    cin >> id;
    gestorPedidos.eliminarPedido(id);
    cout << "Pedido eliminado exitosamente." << endl;
  }
  else if (opcion == 5)
  {
    cout << "Ingrese el ID del pedido a entregar: ";
    int id;
    cin >> id;
    gestorPedidos.entregarPedido(id);
    cout << "Pedido entregado exitosamente." << endl;
  }
  else if (opcion == 6)
  {
    cout << "Ingrese el ID del pedido a obtener: ";
    int id;
    cin >> id;
    Pedido pedido = gestorPedidos.getPedido(id);
    if (pedido.getId() != -1)
    {
      cout << "Pedido ID: " << pedido.getId() << ", Cliente: " << pedido.getCliente().getNombre() << ", Estado: " << pedido.getEstado() << endl;
    }
    else
    {
      cout << "Pedido no encontrado." << endl;
    }
  }
  else if (opcion == 7)
  {
    for (Pedido pedido : gestorPedidos.getPedidos())
    {
      cout << "Pedido ID: " << pedido.getId() << ", Cliente: " << pedido.getCliente().getNombre() << ", Estado: " << pedido.getEstado() << endl;
    }

    cout << "Mostrar pedidos seleccionado." << endl;
  }

  // Menu
  else if (opcion == 8)
  {
    vector<Bebida> bebidas = menu.getBebidas();
    vector<Pizza> pizzas = menu.getPizzas();

    cout << "Menu de Pizzas:" << endl;
    for (Pizza pizza : pizzas)
    {
      cout << "Nombre: " << pizza.getNombre() << ", Tamaño: " << pizza.getTamaño() << "Precio: " << pizza.getPrecio() << endl;
    }

    cout << "Menu de Bebidas:" << endl;
    for (Bebida bebida : bebidas)
    {
      cout << "Nombre: " << bebida.getNombre() << ", Tamaño de Vaso: " << bebida.getTamanioVaso() << "Precio: " << bebida.getPrecio() << endl;
    }
  }
  else if (opcion == 9)
  {
    cout << "Ingrese los datos de la nueva pizza:" << endl;
    cout << "Nombre: ";
    string nombre;
    cin >> nombre;
    cout << "Tamaño: ";
    string tamaño;
    cin >> tamaño;
    cout << "Nombre del ingrediente: ";
    string nombreIngrediente;
    cin >> nombreIngrediente;
    cout << "Precio del ingrediente: ";
    float precioIngrediente;
    cin >> precioIngrediente;
    Ingrediente ingrediente(nombreIngrediente, precioIngrediente);

    Pizza nuevaPizza(nombre, tamaño, {ingrediente});
    menu.agregarPizza(nuevaPizza);

    cout << "Pizza añadida exitosamente." << endl;
  }
  else if (opcion == 10)
  {
    cout << "Ingrese los datos de la nueva bebida:" << endl;
    cout << "Nombre: ";
    string nombre;
    cin >> nombre;
    cout << "Precio: ";
    float precio;
    cin >> precio;
    cout << "Tamaño de vaso: ";
    string tamanioVaso;
    cin >> tamanioVaso;
    Bebida nuevaBebida(nombre, precio, tamanioVaso);
    menu.agregarBebida(nuevaBebida);
    cout << "Bebida añadida exitosamente." << endl;
  }
  else if (opcion == 11)
  {
    cout << "Ingrese el nombre de la pizza a actualizar: ";
    string nombre;
    cin >> nombre;
    cout << "Ingrese los nuevos datos de la pizza:" << endl;
    cout << "Nombre: ";
    string nuevoNombre;
    cin >> nuevoNombre;
    cout << "Tamaño: ";
    string tamaño;
    cin >> tamaño;
    cout << "Nombre del ingrediente: ";
    string nombreIngrediente;
    cin >> nombreIngrediente;
    cout << "Precio del ingrediente: ";
    float precioIngrediente;
    cin >> precioIngrediente;
    Ingrediente ingrediente(nombreIngrediente, precioIngrediente);
    Pizza pizzaActualizada(nuevoNombre, tamaño, {ingrediente});
    menu.actualizarPizza(nombre, pizzaActualizada);
    cout << "Pizza actualizada exitosamente." << endl;
  }
  else if (opcion == 12)
  {
    cout << "Ingrese el nombre de la bebida a actualizar: ";
    string nombre;
    cin >> nombre;
    cout << "Ingrese los nuevos datos de la bebida:" << endl;
    cout << "Nombre: ";
    string nuevoNombre;
    cin >> nuevoNombre;
    cout << "Precio: ";
    float precio;
    cin >> precio;
    cout << "Tamaño de vaso: ";
    string tamanioVaso;
    cin >> tamanioVaso;
    Bebida bebidaActualizada(nuevoNombre, precio, tamanioVaso);
    menu.actualizarBebida(nombre, bebidaActualizada);
    cout << "Bebida actualizada exitosamente." << endl;
  }

  else if (opcion == 13)
  {
    cout << "Ingrese el nombre de la pizza a eliminar: ";
    string nombre;
    cin >> nombre;
    menu.eliminarPizza(nombre);
    cout << "Pizza eliminada exitosamente." << endl;
  }
  else if (opcion == 14)
  {
    cout << "Ingrese el nombre de la bebida a eliminar: ";
    string nombre;
    cin >> nombre;
    menu.eliminarBebida(nombre);
    cout << "Bebida eliminada exitosamente." << endl;
  }

  // Empleados
  else if (opcion == 15)
  {
    cout << "Ingrese los datos del nuevo empleado:" << endl;
    cout << "Nombre: ";
    string nombre;
    cin >> nombre;
    cout << "Edad: ";
    int edad;
    cin >> edad;
    cout << "Telefono: ";
    string telefono;
    cin >> telefono;
    Empleado nuevoEmpleado(nombre, edad, telefono, rand() % 1000);
    gestorEmpleados.contratar(nuevoEmpleado);
    cout << "Empleado agregado exitosamente." << endl;
  }
  else if (opcion == 16)
  {
    cout << "Ingrese el ID del empleado a despedir: ";
    int id;
    cin >> id;
    gestorEmpleados.despedir(id);
    cout << "Empleado despedido exitosamente." << endl;
  }
  else if (opcion == 17)
  {
    vector<Empleado> empleados = gestorEmpleados.getEmpleados();
    cout << "Lista de empleados:" << endl;
    for (Empleado empleado : empleados)
    {
      cout << "ID: " << empleado.getId() << ", Nombre: " << empleado.getNombre() << ", Edad: " << empleado.getEdad() << ", Telefono: " << empleado.getTelefono() << endl;
    }
  }
}

string Pizzeria::getNombre()
{
  return nombre;
};
