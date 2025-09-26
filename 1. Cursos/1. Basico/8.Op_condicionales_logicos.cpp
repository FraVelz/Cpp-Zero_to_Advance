#include <iostream>

/*
 * Operadores Logicos.
 * && (And)
 * || (Or)
 * ! (Negative)
 */

/*
 * Operadores Condicionales.
 * == (Igual)
 * >= (Mayor igual que)
 * <= (Menor igual que)
 * > (Mayor que)
 * < (Menor que)
 */


int main() { // Condicionales 
    int mes;
    std::cout << "\n > Digite un numero de mes del 1-12: ";
    std::cin >> mes;
    
    // If
    if (mes <= 12 && mes >= 1) {
        std::cout << " [+] Bien hecho el numero cumple las condiciones es: " << mes << std::endl;
    }

    else if (mes <= 0) {
        std::cout << " [+] Mal el numero negativo es: " << mes << std::endl;
    }
    
    else {
        std::cout << " [+] Mal el esta por encima de 12 es: " << mes << std::endl;

    }

    // Switch

    switch (mes) {
        case 1:
            std::cout << " Enero :)";
            break;
            
        case 2:
            std::cout << " Febrero :)";
            break;
            
        case 5:
            std::cout << " Yo Cumplo en Mayo :v";
            break;

        default:
            std::cout << "Es mucha info..... aaaaaaaaaaa ..... ";
    }

    // Operador ternario
    std::cout << (mes <= 12 ? "El numero esta bien: " : "El numero esta mal: ") << mes;

    // 1 = Verdadero y 0 = Falso
    return 0;

}
