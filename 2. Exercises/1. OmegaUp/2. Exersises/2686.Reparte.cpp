#include <cstdio>

int main() {
    int n, b, dt=0; 
    scanf("%d %d ", &n, &b);

    for (int i=0; i<b; ++i) {
        int a; scanf("%d ", &a);
        dt += a;
    }

    printf("%d %d", dt/n, dt%n);

    return 0;
}