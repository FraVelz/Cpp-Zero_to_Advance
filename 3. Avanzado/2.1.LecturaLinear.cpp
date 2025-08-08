#include <cstdio>

// Aprender bien sobre tipos de datos.

int main() {
    int arr[] = {4, 5, 2, 3, 1, 6, 9, 1};
    int encontrar = 9;
    int len = 8;

    for (int i = 0; i < len; i++) {
        if (arr[i] == encontrar) {
            printf("\n > Dato (%d) encontrado en el indice: %d\n", encontrar, i);
        }
    }

    return 0;
}