#include <iostream>

int main() {

    // ********************* Imprimir ********************* //
    std::cout << "Hola mundo !" << std::endl;
    std::cout << "Me gusta la pizza" << '\n';

    // ********************* Variables ********************* //
    int x; // Declaracion
    x = 5; // Asignacion

    int y = 10; // Declaracion y Asignacion

    //* Tipos de datos
    int z = 10; //? Numeros Enteros 

    //? Numeros decimales

    long double pi = 3.1416; // Long Double (10-16byts) [6-7 cifras]
    double nota = 3.5; // Double (8bytes) [15 cifras]
    float precio = 3.99; // Float (4bytes) [18-21 cifras] 

    //? Boleanoa
    bool estudiante = true; // true o false (verdadero o falso)

    //? Caracter (Un solo caracter de cualquier tipo)
    // Se utiliza comillas simples
    char letra = 'A'; 

    //? Texto
    // Se utiliza comillas dobles
    std::string name = "Francisco";
    
    //* Constantes
    /* 
    Cualquier dato puede ser constante, 
    al mensionar que un dato es constante, se obtimiza el programa,
    y da aviso de que ese valor no puede cambiar en las nuevas lineas,
    de codigo. Y se utiliza const antes del tipo de dato de la 
    variable.  
    El nombre de las constantes normalmente son en mayusculas.
    */

    const double PI = 3.14159;



    return 0;
}

// Comentario 1 linea

/*
 Comentario
 de varias lineas.
*/ 

