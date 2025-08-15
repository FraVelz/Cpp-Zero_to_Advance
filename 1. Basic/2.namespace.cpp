/*
Los namespace es como una especie de declaracion de variables 
dentro de una clase en python.

y su funcionamiento es similar y de esta forma podemos 
declarar varias variables con mismos nombres pero en namespaces
diferentes.

Los :: es el operador de resolucion de ambito
*/
#include <iostream>

namespace num_uno {
    int x = 5;
}

int x = 1;

int main (){
    
    // using namespace num_uno 
    /*
    hace asesible x del num_uno sin nesesidad 
    de especificar con los :: al utilizarlo
    */ 
    
    using std::string;

    string name = "name";

    int x = 10;

    std::cout << "El valor de x es: " << x << std::endl;
    
    std::cout << "El valor de x es: " << num_uno::x << std::endl;
    
    std::cout << "El valor de x es: " << ::x << std::endl;
    
    return 0;
}