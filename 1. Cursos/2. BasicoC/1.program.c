#include <stdio.h> 

// Todo: Comentarios, Tipos de datos, Salida por Consola (imprimir), 
// Todo: Operaciones Matemáticas.  


// Comentario de 1 linea.

/*
Comentario 
de varias
lineas
*/

int main() {
    //? printf (Solo espera datos de tipo string) 
    
    //* (Imprime en consola).
    printf("\nWellcome to C!");
    
    // ? Tipos de datos.
    int entero = 10;

    float decimal_flotante = 2.34; // 7 digitos decimales.
    double decimal_double = 5.4432; // 15 digitos decimales.

    char caracter = 'A';

    // ? Variables Constantes
    // Escribe const y luego cualqueier tipo de datos.

    const float pi = 3.1416;

    // ? Simbolos de formateo de cadena de texto al imprimir.

    //* Indica que el valor a imprimir de un numero entero.
    printf("\n\n > %d", 255);

    //* Indica que el valor a imprimir de un numero float.
    // printf("\n > %f", 2.55);
    printf("\n > %f", decimal_flotante);

    //* Indica que el valor a imprimir de un numero double.
    printf("\n > %lf", decimal_double);

    //* Indica que el valor a imprimir de un solo caracter.
    printf("\n > %c", 'F');
    // Los caracteres individuales deben estar encerrado en cadenas 
    // simples.

    //* Indica que el valor a imprimir de un texto.
    printf("\n > %s", "Texto string");

    // * Ejemplo de todo Unido
    printf("\n\nName: %s, Age: %d", "James", 20);

    // ? Matematicas.
    int x = 3, y = 6;

    printf("\n\nx = %d, y = %d", x, y);
    printf("\nSuma: %d, Resta: %d, Multiplicacion: %d", x + y, x - y, x * y);
    printf("\nDivision: %d, Resto: %d", x / y, x % y);

    printf("\n");
    
    return 0;
}
