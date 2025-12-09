#ifndef _COCINERO_H_
#define _COCINERO_H_
#include <string>
#include "Empleado.h"
using namespace std;
#include "Pizza.h"

class Cocinero : public Empleado
{
private:
    int pizzasPreparadas;

public:
    int getPizzasPreparadas();
    void prepararPizza(Pizza &pizza);
    Cocinero();
    Cocinero(string _nombre, int _edad, string _telefono, int _id);
};
#endif