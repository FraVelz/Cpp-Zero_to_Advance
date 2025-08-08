#include <iostream>

int main (){
    int estudiantes = 20;
    
    // ******************* Suma ******************* //
    // estudiantes += 1; // estudiantes = estudiantes + 1;
    estudiantes++;
    
    std::cout << "Sumado +1: " << estudiantes << std::endl;
    
    // ******************* Resta ******************* //
    // estudiantes -= 1; // estudiantes = estudiantes - 1;
    estudiantes--;
    
    std::cout << "Restado -1: " << estudiantes << std::endl;
    
    // ******************* Multiplicar ******************* //
    estudiantes *= 2; // estudiantes = estudiantes * 2;
    
    std::cout << "Multiplicado x2: " << estudiantes << std::endl;

    // ******************* Dividir ******************* //
    estudiantes /= 2; // estudiantes = estudiantes / 2;
    
    std::cout << "Dividir /2: " << estudiantes << std::endl;

    // ******************* Modulo ******************* //
    estudiantes %= 2; // estudiantes = estudiantes % 2;
    
    std::cout << "Resto %2: " << estudiantes << std::endl;

    return 0;
}