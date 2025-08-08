#include <iostream>

// using std::cout, std::cin, std::endl;

using std::cout;
using std::cin;
using std::endl;

int main() {
    int num1, num2;
    char operacion;

    cout << endl;
    cout << "********************************" << endl;
    cout << "********** Calculadora *********" << endl;
    cout << "********************************" << endl;
    cout << "*" << endl;
    
    cout << "* > Que operacion aritmetica vas a hacer (+ - * /): ";
    cin >> operacion;

    cout << "*" << endl;
    
    cout << "* > El numero 1 es: ";
    cin >> num1;


    cout << "*" << endl << "* > El numero 2 es: ";
    cin >> num2;
    
    cout << "*" << endl << "* ";

    if (operacion == '+') {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

    } else if (operacion == '-') {
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;

    } else if (operacion == '*') {
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;


    } else if (operacion == '/') {
        cout << num1 << " / " << num2 << " = " << num1 / (float)num2 << endl;
        
    } else {
        cout << "[-] Error 404: Operacion Invalida." << endl;
    }

    cout << "********************************" << endl;

    return 0;
}