#include <cstdio>

int main(){
    int t; scanf("%d", &t);

    while (t--) {
        char c; scanf(" %c", &c);
        char text[] = "codeforces";
        bool isTrue;

        for (int i = 0; i < sizeof(text)-1; ++i) {
            if (text[i] == c) {
                isTrue = true;
                break;
            }
            isTrue = false;
        }

        printf( (isTrue) ? "YES" : "NO");
        putchar('\n');
    }

    return 0;
}