#include <string>

#include "Pizzeria.h"

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
  cout << "Bienvenido a " << nombre << "!" << endl;
  cout << "Seleccione una opcion del menu:" << endl;
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
};

void Pizzeria::ejecutarOpcion(int opcion)
{
  // Clientes
  if (opcion == 1)
  {
    cout << "Agregar cliente seleccionado." << endl;
  }
  else if (opcion == 2)
  {
    cout << "Mostrar clientes seleccionado." << endl;
  }
  // Pedidos
  else if (opcion == 3)
  {
    cout << "Registrar pedido seleccionado." << endl;
  }
  else if (opcion == 4)
  {
    cout << "Eliminar pedido seleccionado." << endl;
  }
  else if (opcion == 5)
  {
    cout << "Entregar pedido seleccionado." << endl;
  }
  else if (opcion == 6)
  {
    cout << "Obtener pedido por ID seleccionado." << endl;
  }
  else if (opcion == 7)
  {
    cout << "Mostrar pedidos seleccionado." << endl;
  }
  // Menu
  else if (opcion == 8)
  {
    cout << "Mostrar menu seleccionado." << endl;
  }
  else if (opcion == 9)
  {
    cout << "Añadir producto al menu seleccionado." << endl;
  }
  else if (opcion == 10)
  {
    cout << "Actualizar pizza seleccionado." << endl;
  }
  else if (opcion == 11)
  {
    cout << "Actualizar bebida seleccionado." << endl;
  }
  else if (opcion == 12)
  {
    cout << "Eliminar producto del menu seleccionado." << endl;
  }
  // Empleados
  else if (opcion == 13)
  {
    cout << "Contratar empleado seleccionado." << endl;
  }
  else if (opcion == 14)
  {
    cout << "Despedir empleado seleccionado." << endl;
  }
  else if (opcion == 15)
  {
    cout << "Mostrar empleados seleccionado." << endl;
  }
}

string Pizzeria::getNombre()
{
  return nombre;
};
