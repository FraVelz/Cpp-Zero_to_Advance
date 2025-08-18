#include <iostream>

/*
 * El bitmask es utilizado cuando, nesesitas una lista de datos 
 * booleanos, en vez de crear un array o utilizar una estructura de
 * datos para crear la lista de datos booleanos, sale con menos gasto
 * de memoria y mas eficiente el usar un int, y acceder a sus datos
 * en binario donde cada 0 es falso, y 1 es verdadero, esta 
 * implementacion de datos boolanos reprensentados por bit de un 
 * numero entero se le llama bitmask.
*/

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // * bit 0: Luz encendida
    // * bit 1: Puerta cerrada
    // * bit 2: Ventana Abierta
    // * bit 3: Alarma apagada

    int bandera = 5; // 0101
    int k=0;

    // ? 1. Encender un Bit ******************************************
    bandera |= (1 << k); // Poner el bit k en 1
    
    // ? 2. Apagar un Bit   ******************************************
    bandera &= ~(1 << k); // Poner el bit k en 0

    // ? 3. Alternar un Bit ******************************************
    bandera ^= (1 << k); // Cambia el valor del bit k, de 0-1, y 1-0

    // ? 4. Consultar un Bit *****************************************
    if (bandera & (1 << k)) cout<<"Activo";

    return 0;
}