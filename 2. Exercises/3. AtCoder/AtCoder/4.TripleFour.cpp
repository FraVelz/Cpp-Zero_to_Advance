#include <cstdio>

int main() {
    int t, b=-1, x = 1;
    bool isTrue = false;

    if ( scanf("%d ", &t) != 1) return 1;

    while (t--) {
        int a;
    
        if ( scanf("%d", &a) != 1) return 1;

        if (a != b) {
            b = a;
            isTrue = (x >= 3) ? true : false;
            x = 1;
        }
        else ++x; 
    }

    printf( (isTrue) ? "Yes" : "No" );
    return 0;
}
