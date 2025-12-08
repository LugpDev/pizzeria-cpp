#ifndef INGREDIENTE_H
#define INGREDIENTE_H

#include <string>
using namespace std;

class Ingrediente
{
private:
    string nombre;
    float costo;

public:
    Ingrediente();
    Ingrediente(string _nombre, float _costo);
    string getNombre();
    float getCosto();
};
#endif // INGREDIENTE_H