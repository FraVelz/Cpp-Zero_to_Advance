#include <cstdio>

int main() {
    int t; scanf("%d", &t);
    
    while (t--) {
        int a, b, c; scanf(" %d %d %d", &a, &b, &c);

        if (a + b == c) putchar('+');
        else if (a - b == c) putchar('-');
        putchar('\n');
    }
    return 0;
}