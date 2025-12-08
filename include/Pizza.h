#ifndef PIZZA_H
#define PIZZA_H

#include <string>
#include <vector>
#include "Ingrediente.h"
#include "Producto.h"
using namespace std;

class Pizza : public Producto { 
private:
    string tamaño;
    vector<Ingrediente> ingredientes;

protected:
    void ponerIngrediente();
    void Amasar();
    void Hornear();
    Pizza(const string& tamaño);
    string getTamaño() const;
};
#endif // PIZZA_H