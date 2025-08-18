#include <cstdio> 

// ************  Entrada y Salida de Datos por Consola ************ //

int main() {

    // ? Entrada de Datos por Consola ********************************
    char caracter = getchar(); // Obtiene 1 solo caracter como entrada.

    int entero;           // Pasando la direccion de memoria,
    scanf("%d", &entero); // Obtiene un entero de entrada.
    
    // Se puede especificar otros tipos de datos, dependiendo del
    // tipo de la variable, y del formateo

    int a; 
    char b;
    bool c;

    scanf("%d %c %i", &a, &b, &c); // Obtiene un entero de entrada.

    char texto[10];
    fgets(texto, 10, stdin); // obtiene un texto completo de 10 c...
    
    // ? Salida de Datos por Consola *********************************

    putchar('\n'); // Imprime 1 solo caracter como salida.

    printf("Hola mundo!\n");

    //* Formateos y tipos
    printf("Yo soy %s!\n", "un programador");

    putchar('\n'); 

    // * Enteros
    printf("1. %d\n", -10);        // Entero.
    printf("1. %i\n", 42);         // Entero.
    printf("1. %u\n", 3000000000); // Entero unsigned.

    putchar('\n'); 

    // * String y Char
    printf("2. %c\n", 'A');    // (char)  Carácter ASCII
    printf("2. %s\n", "Hola"); // (char*) Cadena de caracteres

    putchar('\n'); 

    // * Decimales

    // (float)  decimal fijo (6 decimales por defecto).
    printf("3. %f\n", 3.14);

    // (double) decimal fijo (15 decimales por defecto).
    printf("3. %lf\n", 123.456); 
    
    // Elimina los ceros innesesario y elije la mejor notacion 
    // dependiendo del numero.
    printf("3. %g\n", 123.456);  

    putchar('\n'); 
    
    // * Punteros
    int num = 0;
    int* ptr = &num;
    
    printf("4. %p\n", ptr);

    //* Enteros

    /* 
    | Modificador | Tipo        | Ejemplo de formato  | Significado                  |
    | ----------- | ----------- | ------------------- | ---------------------------- |
    | `h`         | `short`     | `%hd`, `%hu`        | Entero corto (16 bits)       |
    | `hh`        | `char`      | `%hhd`, `%hhu`      | Entero muy corto (8 bits)    |
    | `l`         | `long`      | `%ld`, `%lu`, `%lf` | Entero largo o double        |
    | `ll`        | `long long` | `%lld`, `%llu`      | Entero de 64 bits            |
    | `z`         | `size_t`    | `%zu`               | Tamaño de objetos            |
    | `j`         | `intmax_t`  | `%jd`, `%ju`        | Entero más grande disponible |
    | `t`         | `ptrdiff_t` | `%td`               | Diferencia entre punteros    |
    */

    //* Otros

    putchar('\n'); 
 
    printf("6. %%\n"); // Imprime el carácter `%`    

    return 0;
}