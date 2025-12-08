using namespace std;
#include "Mesero.h"
#include <string>

Mesero::Mesero() : Empleado() {
    bebidasPreparadas = 0;
}
int Mesero::getBebidasPreparadas() {
    return bebidasPreparadas;
}
void Mesero::PrepararBebida(Bebida:bebida) {
    bebida.servir();
    
}
