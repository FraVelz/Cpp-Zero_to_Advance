#include <iostream>

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int motherAge = 29;
    int sonAge = 36;

    try { // Controla el error del programa
        if (sonAge > motherAge) {
            throw 99; // Genera una excepcion (Error del programa)
            // throw "\nWrong age values"; // Genera una excepcion (Error del programa)
        }

    } catch (int x) { // Si pasa el error ejecuta lo siguiente
        cout << "\nError: " << x;
    } 

    // en el anterior caso solo atrapa el error de tipo int

    try {
        // code
    
    } catch(...) { // Al colocar ellipsis (3 puntos) obiene info de todo tipo de error
        // code to handle exceptions
    }

    return 0;
}