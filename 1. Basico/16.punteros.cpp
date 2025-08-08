#include <iostream>

using namespace std;

// (&) Operador de direccion
// (*) Operador de referencia

/*
 * Un puntero es una variable que almacena la direccion
 * de memoria de otra variable.
*/

int main() {
    string name = "Francisco";
    
    // Para los arreglos no es necesario utilizar el operador de direccion

    string *pName = &name; // Puntero de la variable name

    cout << pName << ": " << *pName << endl;

    // Puntero NULO
    int *puntero = nullptr;

    int x = 123;
    puntero = &x;
    
    cout << puntero;

    return 0;
}
