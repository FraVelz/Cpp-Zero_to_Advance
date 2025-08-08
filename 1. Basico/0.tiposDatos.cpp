#include <iostream>

using namespace std;

int main (){
    //********* Char (Caracter) [1 byte] *********//
    char caracter = 'A';

    //********* Bool (Boleanos) [1 byte] *********//
    bool booleano = true;
    
    //********* Int [4 bytes] *********//
    
    // [-32.768, +32.768] [2 bytes] (para numeros Positivos y negativos)
    short int entero_2_bites = -2; 
    
    // [0, 65.535] [2 bytes] (para numeros Positivos)
    unsigned short int natural_2_bites = 2; 
    
    // [-2.147.000.000, +2.147.000.000 4 bytes] (negativo y positivo)
    int entero_4_bytes = 4; 
    
    // [0, +4.294.000.000 4 bytes] (negativo y positivo)
    unsigned int natural_4_bytes = 4;
    
    // [4 bytes] [-2.147.000.000, +2.147.000.000]
    long int entero1 = 4; 
    
    // [4 bytes] (solo positivos) [0, +4.294.000.000]
    unsigned long int entero2 = 4; 
    
    long long entero_8_bytes = 10; // Entero de 8 bytes

    cout << sizeof(long long);
    
    //************** Decimales ************** //

    float decimal_4_bytes = 1.1;
    
    double decimal_8_bytes = 1.1;
    long double decimal_8_bytes = 1.1;

    return 0;
}