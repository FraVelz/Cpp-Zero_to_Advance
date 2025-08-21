#include <iostream>

using namespace std;

int main() {
    char letra;
    int numero; 
    
    cin >> letra >> numero;

    int columna = letra - 'a' + 1;

    if ( (columna + numero) % 2 == 0 ) cout << "NEGRO";
    else cout << "BLANCO";

    return 0;
}

// #include <iostream>

// using namespace std;

// int main() {
//     char letra;
//     int numero; 
    
//     cin >> letra >> numero;

//     if (letra == 'a' || letra == 'c' || letra == 'e' || letra == 'g') {
//         if (numero % 2 == 0) cout << "BLANCO";
//         else cout << "NEGRO";
        
//     } else {
//         if (numero % 2 == 0) cout << "NEGRO";
//         else cout << "BLANCO";
//     }

//     return 0;
// }