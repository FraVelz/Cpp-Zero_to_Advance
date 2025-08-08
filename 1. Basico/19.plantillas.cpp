#include <iostream>

using namespace std;

// ****** Todos los tipos de datos para las variables x, y. ****** //

template <class L>

L sum (L x, L y) {
    return x + y;
};

// ************** x, y variables de tipo diferente. ************** //

template <class T, class U>

T smaller (T x, U y) { return (x > y) ? x : y; }

// ********************* Plantillas de Clase ********************* //

template <class N>
class Pair {
    private:
        N first, second;

    public:
        Pair (N a, N b): first(a), second(b) {}
};

// ****************** Plantillas Especializadas ****************** //

// Porque funciona a todos los tipos de datos diferentes a el char.

template <class T>
class MyClass {
    public:
        MyClass (T x) {
            cout << x << " -  not a char" << endl;
        }
};

template < >
class MyClass<char> {
    public:
        MyClass (char x) {
            cout << x << " is a char!" << endl;
        }
};




int main() {

    return 0;
}