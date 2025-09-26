// TODO: 1.0. String

#include <iostream>
#include <cctype>   // Funciones para caracteres.

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    //* 1. Creación y asignación *************************************
    string s1 = "Hola";
    string s2("Mundo");
    string s3 = s1;  // Copia de s1

    //* 2. Longitud **************************************************
    s1.size();   // Devuelve 4
    s1.length(); // Devuelve 4, es equivalente a size()

    //* 3. Acceso a caracteres ***************************************

    char c = s1[0]; // 'H'
    s1[1] = 'a';    // Cambia 'o' por 'a', ahora s1 = "Hala"

    //* 4. Concatenación *********************************************
    string s4 = s1 + " " + s2; // "Hala Mundo"
    s1 += " mundo";            // s1 = "Hala mundo"

    //* 5. Comparación ***********************************************
    if (s1 == s2) { /* ... */ }
    if (s1 != s2) { /* ... */ }
    if (s1 < s2) { /* ... */ } // Orden lexicográfico

    //* 6. Búsqueda **************************************************
    int pos = s1.find("al");  // Posición de la primera aparición de "al"
    int pos2 = s1.rfind("o"); // Última aparición
    bool existe = s1.find("x") != string::npos; // Comprobar existencia

    //* 7. Subcadenas ************************************************
    string sub = s1.substr(2, 3); // Subcadena desde la posición 2, de longitud 3

    //* 8. Eliminación de caracteres *********************************
    s1.erase(0, 2); // Borra desde posición 0, 2 caracteres
    s1.pop_back();  // Borra el último caracter

    //* 9. Inserción *************************************************
    s1.insert(2, "XXX"); // Inserta "XXX" desde la posición 2

    //* 10. Reemplazo ************************************************
    s1.replace(0, 2, "Hi"); // Reemplaza desde pos 0, 2 caracteres, por "Hi"

    //* 11. Conversión a C-string ************************************
    const char* cstr = s1.c_str(); // Para usar con funciones que requieren char*

    //* 12. Limpieza *************************************************
    s1.clear();   // Deja la cadena vacía

    //* 13. Comprobación de vacía ************************************
    if (s1.empty()) { /* ... */ }

    //* 14. Transformación de caracteres *****************************
    for (char &c : s1) c = toupper(c); // Convierte a mayúsculas

    return 0;
}