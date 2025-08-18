#include <cstdio>

int main() {
    long long x1, y1, x2, y2;
    scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);

    long long distancia = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);

    if (distancia >= (150LL*150)) {
        printf("sana");

    } else {
        printf("insana");
    }

    return 0;
}