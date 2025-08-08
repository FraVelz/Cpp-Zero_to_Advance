#include <iostream>

// cout << (operador de insercion)
// cin >> (operador de extraccion)

int main() {
    std::string name;

    std::cout << std::endl << "What's your name? ";
    // std::cin >> name; // Solo obtiene la 1ra palabra
    std::getline(std::cin, name); // Cadena con espacios

    std::cout << std::endl << "Hello " << name << std::endl;
    return 0;
}