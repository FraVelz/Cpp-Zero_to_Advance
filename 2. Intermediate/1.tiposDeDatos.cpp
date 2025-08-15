#include <cstdint> // Mas Tipos de Datos (int8_t, uint8_t, ...)

/*
En el curso basico, vimos todo las cosas relacionadas a c++, y sobre 
,todo utilizamos mucho el stl, Standard Template Library (Biblioteca 
Estándar de Plantillas), si queremos aprender a programar a un nivel 
mas competitivo, con un menos uso de memoria y rendimiento (menor
tiempo de ejecucion de un programa).

Debemos aprender como funciona por dentro el stl, que van siendo
muchas de las funciones del std de c++.

Para todo esto debemos profundizar en los tipos de datos basicos.
y otras formas mas obtimas de hacer las cosas con mas codigo pero,
creadas directamente para nuestro programa sin ser tan genericas.

En el curso intermedio aprenderemos a no usar el stl.
Para la entrada y salida de datos utilizaremos la libreria de C,
"cstdio".

Tener en cuenta que en la mayoria de las ocasiones si tratamos de 
ahorrar bytes utilizando tipos de datos, en el copilador muchas veces
eso es ineficiente porque los tipos de datos estandar estan bien 
obtimizados, y el tratar de usar otros tipos de datos pueden llegar
a empeorar el rendimiento de un programa. (con excepcion en programas
donde hay un cuello de botella, o sistema de embebidos).
*/

// ********************  Repaso tipos de datos ******************** //

int main() {

    // ? Char utiliza el codigo ASCII (Mismo simbolo char pero ...) **
    unsigned char x = 198;// (198) rempresentacion con numero positivo
    signed char y = 198;  // (-58) rempresentacion con numero negativo
 
    // ? [1 byte] [−128, 127] ****************************************
    // Datos binarios, etiquetas pequeñas, valores 0–100

    // signed char caracter = 'A'; // * Char (Caracter)
    char caracter1 = 'A'; // * Char (Caracter)

    int8_t entero1 = 100; // * Entero

    // [0, 1] la unidad CPU trabaja con bytes y no con bits 
    // individuales, por eso el bool es de 1 byte.

    // ? [1 byte] [0, 255] *******************************************
    // Pixeles, casillas, booleanos, colores 
    // [0, 2^8 - 1] Cantidad de datos negativos y positivo.

    bool booleano = true; // (Boleanos) [1 byte] [0, 1] 

    unsigned char caracter2 = 'A';
    uint8_t entero2 = 200;

    // ? [2 bytes] ***************************************************
    // [0, 2^16 - 1] Cantidad de datos negativos y positivo.
    
    // Contadores pequeños, edades, valores pequeños
    short entero3 = 32000;          // [−32K, +32K]

    // Índices o contadores no negativos
    unsigned short entero4 = 32000; // 	[0, 65K]
    
    // ? [4 bytes] ***************************************************
    // [0, 2^32 - 1] Cantidad de datos negativos y positivo.    
    
    // Uso por defecto 
    int entero5 = 2;          // [-2.147.000.000, +2.147.000.000]
    
    // Cuando sabes que no hay negativos, como en conteo acumulado
    unsigned int entero6 = 2; // [0, +4.294.000.000] 

    // Datos reales con precisión media
    float decimal1 = 2.123456; // [0, 6 decimales] Aproximadamente
    
    // ? [8 bytes] ***************************************************

    // Cantidad de datos negativos y positivo.
    // [−9e18, +9e18] [0, 2^64 - 1] 

    // Sumas grandes, multiplicaciones, combinatoria
    long long entero7 = 10; // Entero

    // Geometría, divisiones complejas
    double decimal2 = 1.1; // [0, 15 decimales] Aproximadamente

    return 0;
}