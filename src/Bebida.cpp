#include "Producto.h"
#include <string>
using namespace std;
#include "Bebida.h"


void Bebida::servir()
{
   estado = "servida"; 
};
Bebida::Bebida(){
    nombre = "";
    precio = 0.0;
    estado = "";
    tamanioVaso = "";
};
Bebida::Bebida(string _nombre, flout _precio, string _tamanioVaso, string _estado):Producto(_nombre, _precio, _estado){
    tamanioVaso = _tamanioVaso;

}
