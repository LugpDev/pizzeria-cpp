#ifndef PIZZA_H
#define PIZZA_H

#include <string>
#include <vector>
#include "Ingrediente.h"
#include "Producto.h"

using namespace std;

class Pizza : public Producto
{
private:
    string tamaño;
    vector<Ingrediente> ingredientes;

public:
    Pizza();
    Pizza(string nombre, const string &tamaño, vector<Ingrediente> ingredientes);

    void amasar();
    void ponerIngredientes();
    void hornear();
    string getTamaño() const;
};
#endif // PIZZA_H