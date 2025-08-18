#include <cstdio>

int main() {
    int t, pares = 0, impares = 0;
    scanf("%d", &t);

    while (t--) {
        int a;
        scanf(" %d", &a);

        if (a%2) ++impares;
        else ++pares;
    }
    printf("%d %d", pares, impares);
    return 0;
}