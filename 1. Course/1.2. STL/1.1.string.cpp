// TODO: 1.1. Practicar todo de String.

// 0. Conceptos Basicos.
// 1. Contar vocales y consonantes en un string.
// 2. Invertir un string manualmente sin usar funciones integradas como reverse().
// 3. Verificar si es palíndromo, ignorando mayúsculas, minúsculas y espacios.
// 4. Contar cuántas veces aparece un carácter específico en el string.
// 5. Eliminar caracteres repetidos consecutivos, dejando solo uno (ej: "aaabb" → "ab").
// 6. Comparar dos strings sin usar operadores de comparación (<, >, ==), carácter por carácter.
// 7. Convertir a mayúsculas/minúsculas (facil :v). 
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
    string new2="a";

    for (int i=0; i< text.size()-2; ++i) {
        if (new2[new2.size()-1] != text2[i]) new2+= text2[i];
    }

    cout<<"\n 5> Texto sin caracteres repetidos seguidos: "<<new2;

    // * Ejercicio #6 ************************************************
    string t1="hola", t2="holA";
    bool band=true;

    for (char e1 : t1) {
        for (char e2 : t2) if (e1 != e2) band=false;
    }

    cout<<"\n 6> Los 2 string son iguales: "<<band;

    // * Ejercicio #7 ************************************************
    string t3 = "mayuscula";
    string t4 = "MINUSCULAS";

    transform(t3.begin(), t3.end(), t3.begin(), ::toupper);
    transform(t4.begin(), t4.end(), t4.begin(), ::tolower);

    cout<<"\n 7> Convertir a Mayuscula y minuscula: "<<t3<<'/'<<t4;

    // * Ejercicio #8 ************************************************
    string cadena = "Hola fravelz, como estas?";
    string subcadena = "fravelz";

    size_t size=cadena.size(), cont=0, pos;
    bool encontrado=false;
    
    for (size_t i=0; i<size; ++i) {
        if (cadena[i] == subcadena[cont]) {
            if (cont==0) pos = i;
            if (cont+1 == size) encontrado=true;
            cont++;
        }
    }

    cout<<"\n 8> Pos. de la subcadena: "<<pos;

    // * Ejercicio #9 ************************************************
    string texto_= "este texto tiene varias palabras";
    size_t palabras=1;

    for (char c : texto_) if (c==' ') ++palabras;

    cout<<"\n 8> Numeros de palabras: "<<palabras;
    
    // * Ejercicio #10 ***********************************************
    string texto_o = "Hola como estas?";

    for (int i=0; i<texto_o.size(); ++i) {
        if (texto_o[i] == 'o') texto_o[i]='x';
    }

    cout<<"\n 8> Remplazo de todas las o: "<<texto_o;

    return 0;
}