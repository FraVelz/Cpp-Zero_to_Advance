#include <cstdio>

int main() {
    int a; scanf("%d", &a);

    printf("%d", (400 % a) ? -1 : 400 / a);

    return 0;
}
