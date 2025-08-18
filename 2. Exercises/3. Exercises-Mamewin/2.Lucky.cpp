#include <cstdio>

int main() {
    int n;
    char numero[1000][6];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) scanf("%s", &numero[i]);
    
    for (int i = 0; i < n; i++) {
        int x = 0, y = 0;

        for (int j = 0; j < 3; j++) {
            x += '0' - (int)numero[i][j];
            y += '0' - (int)numero[i][j+3];
        }
        if (x == y) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}