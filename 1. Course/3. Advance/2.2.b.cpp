#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {3,47,3,678,43,8,43,8,732,489,654,94};

    // Ordenamiento Bubble Sort
    for ( int i=0; i<arr.size(); ++i) {
        for ( int j=0; j<arr.size(); ++j) {
            if ( arr[i] < arr[j] ) {
                swap(arr[i], arr[j]);
            }
        }
    }

    // Mostrar datos
    for (int e : arr) cout<<e<<' ';

    // Busqueda Binaria
    int inf=0, sup=arr.size()-1, medio, encontrar = 732;

    while (inf <= sup) {
        medio = (inf+sup) / 2;

        if ( arr[medio]==encontrar ) {break;}

        if ( arr[medio] > encontrar ) sup=medio-1;

        if ( arr[medio] < encontrar ) inf=medio+1;
    }

    cout<<"\n > La posicion del elemento es: "<<medio;

    return 0;
}