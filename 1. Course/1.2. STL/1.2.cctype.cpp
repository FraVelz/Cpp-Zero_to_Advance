// TODO: Trabaja caracteres individuales, biblioteca cctype.

#include <iostream>
#include <cctype>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char c = 'A';

    //* 1. Comprobación de tipo de carácter **************************

    /*
    * `isalpha(c)` → devuelve verdadero si `c` es letra (a-z o A-Z)
    * `isdigit(c)` → verdadero si es dígito (0-9)
    * `isalnum(c)` → verdadero si es letra o dígito
    * `isspace(c)` → verdadero si es un espacio, tab, salto de línea, etc.
    * `islower(c)` → verdadero si es minúscula
    * `isupper(c)` → verdadero si es mayúscula
    */

    if (isalpha(c)) cout << c << " es letra\n";
    if (isdigit(c)) cout << c << " es dígito\n";

    //* 2. Transformación de caracteres ******************************

    /*
    * `toupper(c)` → convierte `c` a mayúscula
    * `tolower(c)` → convierte `c` a minúscula
    */

    char c = 'b';
    cout << (char)toupper(c) << "\n"; // B
    cout << (char)tolower('F') << "\n"; // f
    // Nota: Algunas funciones devuelven `int`, por eso a veces se hace un cast a `char`.

    //* 3. Otras funciones útiles ************************************

    /*
    * `isxdigit(c)` → verdadero si es un dígito hexadecimal (0-9, A-F, a-f)
    * `iscntrl(c)` → verdadero si es un carácter de control (como '\n', '\t')
    * `isprint(c)` → verdadero si es un carácter imprimible
    */

    string texto = "Hola Mundo 123";

    for (char &c : texto)  c = toupper(c);

    cout << texto; // HOLA MUNDO 123

    return 0;
}
