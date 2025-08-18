#include <iostream>

/*
 * Los operadores bit a bit modifican los bits, de los datos, en vez
 * de trabajar con todo el dato completo.
*/

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 6; // 110
    int b = 3; // 011
    // ? AND (&) *****************************************************
    cout << (a & b) << '\n'; 
    // 010 (Devuelve 1 solo si ambos bit son 1)

    // ? OR  (|) *****************************************************
    cout << (a | b) << '\n'; 
    // 111 (Devuelve 1 si algun bit es 1)

    // ? XOR (^) *****************************************************
    cout << (a ^ b) << '\n'; 
    // 101 (Devuelve 1 si los bit son diferentes)

    // ? NOT (~) *****************************************************
    cout << (~a) << '\n'; 
    // 001 (Invierte los bit de 1 a 0 y de 0 a 1)

    // ? Desplazamiento a la Izquierda (<<) **************************
    cout << (a << 1) << '\n'; 
    // 01100 (12) (Cada despazamiento equivale x2)

    // ? Desplazamiento a la Derecha (>>) ****************************
    cout << (a >> 1) << '\n'; 
    // 011 (3) (Cada desplazamiento equivale n/2)

    return 0;
}