#include <cstdio>

int main() {
    char a[] = "abaababa";

    for (int i = 1; i <= 350; ++i) {
        putchar( a[ i % 8] );
        if (i % 50 == 0) putchar('\n');
    }

    return 0;
}