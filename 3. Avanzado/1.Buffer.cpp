#include <cstdio>

/*
Ya aprendimos a programar en c++, sin el stl, ahora vamos a practicar
y aprender sobre como crear diferentes funcionalidades y estructuras 
para el buen manejo de el codigo, estructuras mas complejas y con
un control mayor que en las funciones basicas de c, en c++.

mejora el rendimiento, pero incrementa los fallos y errores del 
codigo.

Bueno, entonces en vez de utilizar funciones como cin/cout del stl,
aprendimos a utilizar printf/scanf funciones de el estandar de c,
que nos dieron un mayor rendimiento a la hora de hacer codigo,
pero ahora aprenderemos a manejar nosotros mismos el buffer de entrada
como de salida, para crear nuestras propias funciones para mostrar,
en pantalla y para leer datos de la manera mas obtimizada posible 
segun lo nesesario del programa.
*/

// * Buffer Input(Entrada) *******************************************

#include <cstdio>

const int BSIZE = 1 << 20;  // 1MB de buffer
char buf[BSIZE];
int bpos = 0, bsize = 0;

// Leer siguiente carácter del buffer
char getChar() {
    if (bpos >= bsize) {
        bsize = fread(buf, 1, BSIZE, stdin);
        bpos = 0;
        if (bsize == 0) return -1; // Fin de archivo
    }
    return buf[bpos++];
}

// Leer entero (sin usar funciones externas)
int readInt() {
    int x = 0;
    int neg = 0;
    char c = getChar();

    // Ignorar caracteres no numéricos ni '-' (espacios, saltos, etc.)
    while ((c < '0' || c > '9') && c != '-' && c != -1) {
        c = getChar();
    }

    if (c == '-') {
        neg = 1;
        c = getChar();
    }

    while (c >= '0' && c <= '9') {
        x = x * 10 + (c - '0');
        c = getChar();
    }

    return neg ? -x : x;
}

// Leer un carácter no blanco (sin saltos ni espacios)
char readChar() {
    char c = getChar();
    while ((c == ' ' || c == '\n' || c == '\r' || c == '\t') && c != -1) {
        c = getChar();
    }
    return c;
}

// Leer string (hasta espacio o salto de línea)
void readString(char* s) {
    char c = getChar();

    // Ignorar espacios y saltos
    while ((c == ' ' || c == '\n' || c == '\r' || c == '\t') && c != -1) {
        c = getChar();
    }

    // Leer hasta espacio o salto de línea
    while (c != ' ' && c != '\n' && c != '\r' && c != '\t' && c != -1) {
        *s++ = c;
        c = getChar();
    }
    *s = '\0';
}

// * Buffer Output(Salida) *******************************************

// 1. definir datos
const int out_buff_size = 1 << 7; // Menos que 128 caracteres
char outbuffer[out_buff_size];    // Buffer para el output
int outbuffer_pos = 0;            // Posicion en la que va agregando

// 2. escribir un caracter
inline void write_char(char c) {
    if (outbuffer_pos == out_buff_size) {
        fwrite(outbuffer, 1, out_buff_size, stdout); // Baciar buffer
        outbuffer_pos = 0;
    }

    outbuffer[outbuffer_pos++] = c;
}

// 3. escribir una cadena
inline void write_str(const char* s) {
    while (*s) write_char(*s++);
}

// 4. vaciar el buffer
inline void flush_buffer() {
    fwrite(outbuffer, 1, out_buff_size, stdout);
    outbuffer_pos = 0;
}

// 5. Imprimir entero

inline void write_int(int x) {
    if (x == 0) {
        write_char('0');
        return;
    }

    else if (x < 0) {
        write_char('-');
        x = -x;    
    };

    char tmp[10] = {}; int pos = 0;

    while(x) {
        tmp[pos++] = (x % 10) + '0';
        x /= 10;
    }

    while(pos) {
        write_char(tmp[--pos]);
    }
}

int main() {
    int a = readInt();         // ejemplo: 123
    char letra = readChar();   // ejemplo: Z
    char palabra[100];
    readString(palabra);       // ejemplo: hola123

    write_str("Hola Mundo\n");
    
    write_int(a);
    write_char('\n');
    
    write_str(palabra);

    write_char(letra);
    write_char('\n');

    flush_buffer();

    return 0;
}