#include <iostream>
#include <array>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // * Busqueda linear normal
    array<int, 10> a = {1,2,3,4,5,6,7,8,9,10};
    int pos = -1;

    for (int x : a) {
        if (x == 9) {pos = x-1;}
    }
    cout << " > La posicion de 9 es: " << pos; 

    // * Busqueda Linear Con Centinela
    array<int, 11> b;

    for (int i = 0; i < 10; ++i) b[i] = a[i];
    b[10] = 9; // La Centinela (El valor a buscar al final)
    // para reducir comprobaciones si el valor buscado no existe

    int i = 0;
    while (b[i++] != 9);

    if (i < 10) {cout << " \nSe encontro en la posicion: "<<i;}
    else cout<<"\nNo se encontro el valor :(";

    return 0;
}