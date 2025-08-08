#include <iostream>

using namespace std;

/*
 * Niveles de la memoria:
 * 1. Heap. 
 * 2. Stack.
 * 3. Global/Static. [Variables]
 * 4. text (code). [Codigo]
 * 
 * Los punteros quedan guardados en el stack de la
 * memoria, pero para proyectos donde no sabemos
 * cuanta memoria se va a usar o es mucha memoria.
 * 
 * el puntero lo hubicamos en el heap de la memoria
 * utilizando la palabra reservada (new) como se muestra
 * a continuacion pero es muy importante que despues
 * de que termine el programa utilizar (delete) para
 * evitar ocupacion de memoria con la misma informacion
 * aunque el programa ya este finalizado.
 */

int main() {
    int *pNum = NULL;
    pNum = new int;
    *pNum = 25;

    cout << "direccion: " << endl;
    cout << "valor: " << endl;

    delete pNum; // Libera la memoria
    // Evita la fuga de memoria

    return 0;
}
