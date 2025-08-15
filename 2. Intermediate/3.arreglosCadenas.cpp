#include <cstdio> 
#include <cstring>

// *****************  Arreglos y Cadenas de Texto ***************** //

int main() {

    // ? Arreglos ****************************************************
    // Usa el stack cuando puedas, y el heap solo cuando lo necesites.

    // * Arreglo Estatico (stack)
    // La memoria se reserva en el stack (pila).
    // Si no se inicializa los valores son basura.

    int array1[10] = {}; // Aqui se inicializa relleno de 0.

    // * Arreglo Dinamicos (heap)

    int* array2= new int[10](); // Aqui se inicializa relleno de 0.

    // *Funciones Memset y Memcpy

    int w[5] = {1, 2, 3, 4, 5};
    int q[5];

    int x[1000], y[1000] = {};

    /*
    se utiliza para inicializar arrays mayores de 10 a la 6 o para 
    cuando ya este inicializado (memset).

    se utiliza para copiar arrays mas rapidos que un bucle for 
    (memcpyS).
    */
    
    memset(x, -1, sizeof(x)); // Inicializa x, con valores de -1
    // Solo se permiten (0, -1)

    memcpy(y, x, sizeof(x));  // copia los 1000 enteros de x
    // Después de eso, y será igual a x.


    // ? Cadenas de Texto ********************************************

    putchar('\n');

    char texto[] = "Hola FV";

    // Longiud de la cadena de texto.
    printf("\n > Texto tiene longitud de: %d\n", strlen(texto));

    // Copia una cadena a otra.
    char destino[100];
    char origen[] = "adios";
    strcpy(destino, origen); // Copia el contenido

    // Comparar cadenas.
    char a[] = "gato";
    char b[] = "gato";
    char c[] = "perro";

    strcmp(a, b); // Devuelve 0 (son iguales)
    strcmp(a, c); // Devuelve < 0 (porque 'g' < 'p')

    /*
    | Función   | Descripción                             |
    | --------- | --------------------------------------- |
    | `strncpy` | Copia con límite de caracteres          |
    | `strcat`  | Concatena al final de otra cadena       |
    | `strchr`  | Busca un carácter dentro de la cadena   |
    | `strstr`  | Busca un substring dentro de una cadena |
    */

    return 0;
}