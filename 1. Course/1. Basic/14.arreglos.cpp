#include <iostream>

using namespace std;

int main() {
    string arreglo[3]; // arreglo de tamaño 3

    string automoviles[] = {"Mustang", "Lamborghini", "Ferrari"};
    
    cout << automoviles[0] << "\n";
    cout << automoviles[1] << "\n";
    cout << automoviles[2] << "\n";
    
    automoviles[0] = "Porshe";
    
    cout << automoviles[0] << "\n";

    for (string automovil : automoviles) {
        cout << " > " << automovil << endl;
    }
    
    int x = 1;

    while(x<10) {
        cout << "Hello" << endl;
        x+=3;
    }


    string texto[30];
    fill(texto, texto+30, "FV");

    for (string t : texto) {
        cout << t;
    }

    // Arreglos de 2 dimensiones

    int bidimensional[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "\n" << bidimensional[2][0];

    return 0;
}