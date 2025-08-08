
int main() {
}

#include <iostream>

using namespace std;

// Funcion que puede recibir parametros infinitos

template<typename... Args>
auto suma(Args... args) {
    return (args + ...); // C++17: Fold expression
}

int main() {
    cout << suma(1, 2, 3, 4); // 10

    string name = "Francisco";
    
    // [&] Toda la informacion de afuera por referencia
    // [=] Toda la informacion de afuera por copia
    // [name] La informacion de name por copia
    // [&name] La informacion de name por referencia
    // [&, name] Toda la informacion de afuera por referencia, y name por copia.

    // (string abc) Argumento abc para la funcion lambda

    auto fun = [name]() {
        cout << "Hola Mundo :)" << endl;
        cout << "Hola " << name << endl;
    };

    return 0;
}
