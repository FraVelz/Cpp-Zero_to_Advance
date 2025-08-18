#include <cstdio>

int main() {
    int t, counter = 0;
    scanf("%d ", &t);

    for (int i = 0; i < t; ++i) {
        for (int j = 0; j < t; ++j) {
            if ( (counter == j) || (j == t-1-counter) ) putchar('@');
            else putchar(' ');
        }

        putchar('\n');
        ++counter;
    }

    return 0;
}