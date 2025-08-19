#include <cstdio>

int main() {
    int t;
    scanf("%d ", &t);

    while (t--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if ((a + b >= 10) || (b+c >= 10) || (a+c >= 10)) printf("YES");
        else printf("NO");
        putchar('\n');
    }

    return 0;
}