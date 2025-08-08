#include <iostream>

using namespace std;

/*
 * La recursion utiliza mas memoria y es mas lento,
 * en comparacion con la iteracion y esto hay que 
 * tener en cuenta.
 */

void fibonacci(int a, int b) {
    cout << a << " + " << b << " + ";

    if (a+b <= 10) { fibonacci(b, a+b); }
}


int factorial(int a) {
    
    if (a > 1) { 
        cout << a << " x ";
        return a * factorial(a - 1); 
    
    } else {
        cout << a << " = ";
        return a;
    }
}

int main() {

    // fibonacci(2, 2);
    cout << factorial(10);

    return 0;
}
