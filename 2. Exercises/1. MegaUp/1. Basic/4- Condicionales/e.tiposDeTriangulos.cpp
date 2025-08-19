#include <cstdio>

int main() {
    int a, b, c; scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) printf("equilatero");
    else if (a == b || b == c || a == c) printf("isosceles");
    else printf("escaleno"); 

    return 0;
}