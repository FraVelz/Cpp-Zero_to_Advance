#include <cstdio>
#include <cstring>

void _char_replace(char characters[], char antiguo, char nuevo) {
    for (int i = 0; i < strlen(characters); ++i) {
        if (characters[i] == antiguo) {
            characters[i] = nuevo;
        }
    }
}
int main () {
    char c, format[] = "   FFFFFF      FFFFF\n  FFFFFFFF    FFFFFFF\n FFFFFFFFFF  FFFFFFFFF\nFFFFFFFFFFFFFFFFFFFFFFF\nFFFFFFFFFFFFFFFFFFFFFFF\n FFFFFFFFFFFFFFFFFFFFF\n  FFFFFFFFFFFFFFFFFFF\n   FFFFFFFFFFFFFFFFF\n    FFFFFFFFFFFFFFF\n     FFFFFFFFFFFFF\n      FFFFFFFFFFF\n       FFFFFFFFF\n        FFFFFFF\n         FFFFF\n          FFF\n           F";

    scanf("%c", &c);

    _char_replace(format, 'F', c);

    printf(format);
}