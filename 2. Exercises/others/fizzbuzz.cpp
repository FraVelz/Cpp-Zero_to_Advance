#include <cstdio>

void recursivoFizzBuzz(int max = 10, int num = 0) {
    
    if ( num >= max ) return;

    if (num % 3 == 0 && num & 5 == 0) {
        printf("fizzbuzz\n");
    
    } else if ( num % 3 == 0) {
        printf("fizz\n");
    
    } else if ( num % 5 == 0) {
        printf("buzz\n");
    }

    return recursivoFizzBuzz(max, --num);
}

int main () {
    for (int i = 0; i < 10; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("fizzbuzz\n");
        
        } else if ( i % 3 == 0) {
            printf("fizz\n");
        
        } else if ( i % 5 == 0) {
            printf("buzz\n");
        }
    }

    printf("\n\n\n");

    recursivoFizzBuzz(10);
}