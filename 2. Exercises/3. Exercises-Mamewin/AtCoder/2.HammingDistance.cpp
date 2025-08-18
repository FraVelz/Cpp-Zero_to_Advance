#include <cstdio>

int main() {
    char text1[100], text2[100];

    int size, counter=0; 
    scanf("%d %s %s", &size, text1, text2);

    for (int i = 0; i < size; ++i) {
        if (text1[i] != text2[i]) ++counter;
    }

    printf("%d", counter);
    return 0;
}