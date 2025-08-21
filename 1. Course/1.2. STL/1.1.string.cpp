// TODO: 1.1. Practicar todo de String.

// 0. Conceptos Basicos.
// 1. Contar vocales y consonantes en un string.
// 2. Invertir un string manualmente sin usar funciones integradas como reverse().
// 3. Verificar si es palíndromo, ignorando mayúsculas, minúsculas y espacios.
// 4. Contar cuántas veces aparece un carácter específico en el string.
// 5. Eliminar caracteres repetidos consecutivos, dejando solo uno (ej: "aaabb" → "ab").
// 6. Comparar dos strings sin usar operadores de comparación (<, >, ==), carácter por carácter.
// 7. Convertir a mayúsculas/minúsculas sin usar funciones como toupper() o tolower().
// 8. Buscar un substring en un string principal usando solo bucles (for o while).
// 9. Contar palabras en un string separadas por espacios.
// 10. Reemplazar todas las apariciones de un carácter por otro (ej: "hola" → "h0la").

#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // * Conceptos Basicos *******************************************

    // ? Invertir Cadena
    string palabra = "hola mundo";
    string palabra_original = palabra;

    reverse(palabra.begin(), palabra.end());
    cout<<"\n Palabra Revertida: "<<palabra;

    // ? Concatenar
    string a = "Yo soy, ", b = "GROOOT";
    cout << " > " << (a + b) << '\n';

    // ? Son Iguales
    cout << " > " << (a == b) << '\n';

    string palabra2 = "Nose, que decir la verdad :v";

    // ? Cadena mas pequeña
    cout << " > " << palabra2.substr(0,5) << '\n';
    
    
    // ? Remplazar en una cadena de texto 
    palabra2.replace(0, 4, "Si se"); 
    cout << " > " << palabra2 << '\n';

    // ? Quitar espacios
    string new_palabra2;

    for (int i = 0; i < palabra2.length(); ++i) {
        if ( palabra2[i] != ' ') new_palabra2 += palabra2[i];
    }

    cout << " > " << new_palabra2 << "\n";

    // ? Contador de Palabras
    int counter2 = 1;

    for (char caracteres : palabra2) {
        if (caracteres == ' ') ++counter2;
    }

    cout << " > Las palabra que hay son: " << counter2 << '\n';
    cout<<"\n";

    // * Ejercicio #1 ************************************************
    int vocales = 0, consonantes = 0;
    string text = "Hola mundo";
    
    transform(text.begin(), text.end(), text.begin(), ::tolower);

    for (char c : text) {
        if ( c=='a' || c== 'e' || c=='i' || c=='o' || c=='u') {
            ++vocales;

        } else {
            ++consonantes;
        }
    }

    cout << "\n 1> Vocales: " << vocales << ", Consonantes: "<<consonantes;

    // * Ejercicio #2 ************************************************
    string text_reverse(text.size(), ' ');

    for (int i = text.size()-1; i >= 0; --i) {
        text_reverse[text.size()-1-i] = text[i];
    }

    cout<<"\n 2> Cadena de texto invertida: "<<text_reverse;

    // * Ejercicio #3 ************************************************
    string texto="reconocer";

    string other_string = texto;

    reverse(other_string.begin(), other_string.end());

    cout<<"\n 3> ";

    if (texto==other_string) cout<<"Es Un palindromo";
    else cout<<"No es un palindromo";
    

    // * Ejercicio #4 ************************************************
    char encontrar='r';
    int cont1=0;

    for (char c : texto) {
        if (c==encontrar)++cont1;
    }
    
    cout<<"\n 4> El caracter: "<<encontrar<<" se repite "<<cont1;

    // * Ejercicio #5 ************************************************
    string text2 = "aaabbbb";
    string new2="";

    for (int i=1; i<text2.size()-2; ++i) {
        if (text2[i] != text2[i+1] || text2[i-1] != text2[i]) new2 += text2[i];
    }

    cout<<"\n 5> "<<new2;

    return 0;
}