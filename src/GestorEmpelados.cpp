#include "GestorEmpleados.h"
#include <iostream>
using namespace std;

GestorEmpleados::GestorEmpleados() {}

vector<Empleado> GestorEmpleados::getEmpleados() {
    return empleados;
}

void GestorEmpleados::contratar(Empleado empleado) {
    empleados.push_back(empleado);
}

void GestorEmpleados::despedir(int id) {
    for (int i = 0; i < empleados.size(); i++) {
        if (empleados[i].getId() == id) {
            empleados.erase(empleados.begin() + i);
            break;
        }
    }
}