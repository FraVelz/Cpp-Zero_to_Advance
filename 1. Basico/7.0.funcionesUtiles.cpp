#include <iostream>
#include <cmath>

using std::cout;

int main() {
    double x = 3;
    double y = 4;
    double z;

    cout << "El mayor numero es: " << std::max(x, y) << std::endl;
    cout << "El minimo numero es: " << std::min(x, y) << std::endl;
    cout << "El numero 2 elevado 5 es: " << std::pow(2, 5) << std::endl;
    
    cout << "\nEl numero raiz cuadrada de 9 es: " << std::sqrt(25) << std::endl;
    
    cout << "El numero raiz cuadrada de 9 es: " << std::abs(-2) << std::endl;
    
    cout << "\nEl numero pi redondeado es: " << std::round(3.14159) << std::endl;
    cout << "El numero pi redondeado (siempre) hacia arriba es: " << std::ceil(3.14159) << std::endl;
    cout << "El numero pi redondeado (siempre) hacia abajo es: " << std::floor(3.14159) << std::endl;


    return 0;
}