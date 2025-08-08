#include <iostream>
#include <fstream> // Manejo de Archivos

using namespace std;

// Se definen tres nuevos tipos de datos en fstream:

// ofstream: Flujo de salida de archivos que crea y escribe 
// información en archivos.

// ifstream: Flujo de entrada de archivos que lee información de 
// archivos.

// fstream: Flujo de archivos general, con capacidades tanto de 
// ofstream como de ifstream que le permiten crear, leer y escribir 
// información en archivos.


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ofstream MyFile("test.txt");

    // ofstream MyFile;
    // MyFile.open("test.txt");

    if (MyFile.is_open()) { // Comprueba si se accedio al archivo
        MyFile << "This is awesome! \n";

    } else {
        cout << "Something went wrong";
    }

    MyFile.close();

    return 0;
}