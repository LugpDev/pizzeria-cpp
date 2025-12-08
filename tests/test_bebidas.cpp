#include "Bebida.h"
#include <cassert>
#include <string>
using namespace std;

int main()
{
    Bebida bebida1("boing mango", 15.0, "chico");
    bebida1.servir();
    assert(bebida1.getEstado() == "Servida");
}
