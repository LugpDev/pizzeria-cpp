#ifndef __GESTOREMPLEADOS_H__
#define __GESTOREMPLEADOS_H__

#include <string>
#include <vector>
#include "Empleado.h"

using namespace std;

class GestorEmpleados
{
private:
    vector<Empleado> empleados;

public:
    GestorEmpleados();

    vector<Empleado> getEmpleados();
    void contratar(Empleado empleado);
    void despedir(int id);
};

#endif // __GESTOREMPLEADOS_H__