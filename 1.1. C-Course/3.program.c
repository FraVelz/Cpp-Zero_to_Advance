#include <stdio.h>

// Todo: Arreglos, Cadenas de Texto, Funciones y Punteros.


// ? Funciones

/*
void => no retorna valores.
int => retorna entero.
char => retorna un caracter.
etc...
*/

void greeting() {
    printf("Hello! \n");
    printf("I am an example function.");
}


int main() {
    // ? Arreglos

    int nums[] = {1, 2, 3, 4};

    // tipoDeDato variable[tamañoDelArreglo]
    int ages[7];

    ages[2] = 24; // {..., ..., 24, ..., ..., ..., ...}
    ages[0] = 31; // {31, ..., 24, ..., ..., ..., ...}

    printf("\n%d", ages[2]); // 24


    // ? Cadenas de Texto
    char text[] = "some text";

     printf("\n > Esto es una cadena de texto: \"%s\".", text);

    char name[50];
    scanf("%s", name); // Limite de 50 caracteres en la cadena
    // momento en que aparezca un espacio se corta.

    // Obtiene todo el texto completo con limite de 50
    // la info pasa a la variable name, y stdin es una palabra clave
    // que hace referencia a la entrada de datos por consola

    fgets(name, 50, stdin);

    // ? Funciones

    greeting(); // Llamado de una funcion

    // ? Punteros
    
    int number = 10;

    int* puntero = &number;
    
    // Direccion de memoria de la variable number
    printf("\n > %p", puntero); 
    
    // Dato de la variable number
    printf("\n > %d", *puntero);

    return 0;
}