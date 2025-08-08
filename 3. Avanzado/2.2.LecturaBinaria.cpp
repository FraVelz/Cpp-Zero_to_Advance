#include <cstdio>

// Aprender bien sobre tipos de datos.

int main() {
    // Los datos deben estar organizados
    int arr[] = {1, 1, 2, 3, 4, 5, 6, 9};
    int encontrar = 9;
    
    int data;

    while (data != 0) {
        data /= 2;

        for (int i = 0); i < data; i++) {
            if (arr[i] == encontrar) {
                printf("\n > Dato (%d) encontrado en el indice: %d\n", encontrar, i);
            }
        }
    }
    


    return 0;
}