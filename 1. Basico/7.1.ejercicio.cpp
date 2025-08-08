#include <iostream>
#include <cmath>

using std::cout;

int main() {
    int cat_a;
    cout << "\n > Digite la longitud del cateto 1: ";
    std::cin >> cat_a;
    
    int cat_b;
    cout << " > Digite la longitud del cateto 2: ";
    std::cin >> cat_b;

    double hip = sqrt(pow(cat_a, 2) + pow(cat_b, 2));

    cout << std::endl << " [+] La hipotenusa es: " << hip << std::endl;
    
    return 0;
}