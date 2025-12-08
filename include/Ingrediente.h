#ifndef INGREDIENTE_H
#define INGREDIENTE_H

#include <string>
using namespace std;

class Ingrediente {
private:
    string nombre;
    float costo;
public:
    Ingrediente(const string& nombre, float costo);
    string getNombre() const;
    float getCosto() const;
};
#endif // INGREDIENTE_H