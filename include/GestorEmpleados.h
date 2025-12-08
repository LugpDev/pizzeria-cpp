#ifndef _GESTOREMPLEADOS_H__
#define _GESTOREMPLEADOS_H_

#include <string>
#include <vector>
#include "Empleado.h"

using namespace std;

class GestorEmpleados {
private:
    vector<Empleado> empleados;

public:
    GestorEmpleados();

    vector<Empleado> getEmpleados();
    void contratar(Empleado empleado);
    void despedir(int id);

};

#endif 