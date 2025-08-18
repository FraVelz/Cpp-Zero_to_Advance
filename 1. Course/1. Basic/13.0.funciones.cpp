#include <iostream>
#include <ctime>

using std::cout;
using std::endl;

/*
 * Las funciones se tienen que declarar
 * antes que el main. Tambien se pueden 
 * declarar vacio para que la funcion sea
 * previamente llamada despues.
 * 
 * Tambien permiten parametros cuanto uno 
 * quiera ded ellos y la funcionalidad del
 * return es igual que en python solo que 
 * habra que definir que tipo de valor 
 * retorna la funcion cuando se crea y 
 * void significa que no retorna valor.
 * 
 * Funciones sobrecargadas son funciones
 * que se pueden definir varias veces para 
 * que si se utiliza por ejemplo 1 parametro
 * elije la que tiene solo un parametro
 * pero si se elige 2 parametros tambien podemos 
 * definir una funcion que no tenga nada que ver
 * pero que utilize 2 parametros para el mismo 
 * nombre.
*/

void print_(std::string name, int age);

int suma(int a) {return a;}
int suma(int a, int b) {return a + b;}
int suma(int a, int b, int c) {return a + b + c;}

int main() {
    
    std::string n="Franchesco";
    
    print_("Franchesco", 17);

    cout << "Suma 1: " << suma(10) << endl;
    cout << "Suma 2: " << suma(10, 20) << endl;
    cout << "Suma 3: " << suma(10, 20, 30) << endl;

    return 0;
}

void print_(std::string name, int age) {
    cout << "Tu nombre es: " << name << endl;
    cout << "Tu Edad es: " << age << endl;
}
