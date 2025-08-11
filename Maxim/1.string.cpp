// TODO: Practicar todo de String.

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

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // * Ejercicio #1
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

    cout << "\n > Vocales: " << vocales << ", Consonantes: "<<consonantes;

    // * Ejercicio #2

    return 0;
}
