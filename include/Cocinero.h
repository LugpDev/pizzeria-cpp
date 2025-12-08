#ifndef _MESERO_H_
#define _MESERO_H_
#include <string>
#include "Empleado.h"
using namespace std;
#include "Pizza.h"

class Mesero : public Empleado
{
private:
    int pizzasPreparadas;
public:
    int getPizzasPreparadas();
    void PrepararPizza(Pizza pizza);
    Mesero();
    Mesero (string nombre, int edad, string telefono, int id);       
};
#endif