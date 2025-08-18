#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream archivo("1.TETRIX.ENT");
    string linea;

    if (archivo.is_open()) {
        while(getline(archivo, linea)) {
            cout << linea << '\n';
        }

        archivo.close();

    } else {
        cout << "\n[-] Error: No se pudo abrir el archivo...";
    }
    return 0;
}