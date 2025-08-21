#include <cstdio>

int main() {
    float a, b, c; scanf("%f %f %f", &a, &b, &c);

    if (b == 0) printf("indefinido");
    else if (c == 0) printf("%f", a/b);

    else {
        printf("%f %f", (a/b) + c, (a/b) - c);
    } 

    return 0;
}