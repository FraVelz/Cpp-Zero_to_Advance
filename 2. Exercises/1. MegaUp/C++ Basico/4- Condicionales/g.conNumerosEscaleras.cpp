#include <cstdio>

bool esEscalera(long long num) {
    char num_c[10] = {};
    int len = 0;
    
    if (num == 0) return false;

    while (num) {
        num_c[len++] = (num % 10) + '0';
        num /= 10;
    }

    int esImpar = (len % 2);
    int pos = len-1;

    int mitad = len / 2;
    int pos_mitad = mitad + (len % 2); 

    for (int i = 0; i < mitad; ++i) {

        if ( (num_c[i] != '0' + (i+1) ) || (num_c[i+pos_mitad] != '0' + (pos_mitad-i-esImpar)) ) {
            return false;
        }
    }
    return true;
}


int main() {
    long long n;
    int b, c; scanf("%lld %d %d", &n, &b, &c);
    
    if (esEscalera(n)) {
        printf("es escalera inicialmente");

    } else {
        if ( esEscalera( (n-b) / (c+1) ) ) {
            printf("es escalera despues del primer intento");
        
        } else {
            printf("nos rendimos");
        }
    }

    return 0;
}