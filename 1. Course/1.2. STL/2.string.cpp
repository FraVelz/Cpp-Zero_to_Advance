#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "Francisco";
    cout << name << "\n";

    // ************* Operaciones basicas ************* //
    string a = "Hola";
    string b = "Mundo";

    // Concatenar
    string c = a + " " + b; // "Hola Mundo"

    // Longitud
    cout << c.size() << "\n"; // 10 (o tambien .length())

    // Acceso a caracteres
    cout << c[0] << "\n"; // 'H'

    // Modificar caracteres
    c[0] = 'h'; // "hola Mundo"

    // Comparar
    if (a == "Hola") {
        cout << "Son iguales\n";
    }

    // Funciones Utiles
    bool estaVacia = a.empty(); // false (no esta vacia)

    cout << a.substr(2, 3) << '\n';

    return 0;
}

// | Función               | Descripción                                                       |
// | --------------------- | ----------------------------------------------------------------- |
// | `size()` o `length()` | Longitud de la cadena.                                            |
// | `empty()`             | Devuelve `true` si está vacía.                                    |
// | `substr(pos, len)`    | Devuelve una subcadena desde `pos` con longitud `len`.            |
// | `find(str)`           | Busca `str` y devuelve posición o `std::string::npos` si no está. |
// | `erase(pos, len)`     | Elimina caracteres.                                               |
// | `insert(pos, str)`    | Inserta `str` en la posición dada.                                |
// | `clear()`             | Vacía la cadena.                                                  |


// std::string texto = "Hola mundo";
// std::cout << texto.substr(0, 4); // "Hola"
// std::cout << texto.find("mundo"); // 5
// texto.erase(4, 1); // Quita el espacio -> "Holamundo"






// 4. Entrada de datos
// ⚠️ Importante: cin lee solo hasta el primer espacio, mientras que getline lee la línea completa.

// cpp
// Copiar
// Editar
// std::string nombre;
// std::getline(std::cin, nombre); // Lee toda la línea con espacios
// Si quieres, puedo prepararte una tabla completa de operaciones de std::string en C++ para olimpiadas con ejemplos cortos y explicaciones rápidas, así las tendrás como referencia para programar más rápido. ¿Quieres que la haga?








// Sí, `std::string` tiene **muchas más funciones** de las que normalmente se usan, y si las conoces todas puedes ahorrar mucho tiempo en programación competitiva y en C++ en general.

// Te voy a dar una **tabla completa y organizada** por categorías con todas las funciones más útiles de `std::string`, incluyendo las menos conocidas, con ejemplos rápidos.

// ---

// ## 📌 **Funciones de `std::string` en C++**

// ### 1️⃣ **Información sobre la cadena**

// | Función               | Descripción                | Ejemplo        |
// | --------------------- | -------------------------- | -------------- |
// | `size()` / `length()` | Devuelve la longitud       | `s.size()`     |
// | `empty()`             | `true` si está vacía       | `s.empty()`    |
// | `capacity()`          | Capacidad actual reservada | `s.capacity()` |
// | `max_size()`          | Tamaño máximo posible      | `s.max_size()` |

// ---

// ### 2️⃣ **Acceso a caracteres**

// | Función      | Descripción                      | Ejemplo     |
// | ------------ | -------------------------------- | ----------- |
// | `operator[]` | Accede sin comprobación de rango | `s[0]`      |
// | `at(pos)`    | Accede con comprobación de rango | `s.at(0)`   |
// | `front()`    | Primer carácter                  | `s.front()` |
// | `back()`     | Último carácter                  | `s.back()`  |

// ---

// ### 3️⃣ **Modificación**

// | Función                  | Descripción                      | Ejemplo                    |
// | ------------------------ | -------------------------------- | -------------------------- |
// | `clear()`                | Vacía la cadena                  | `s.clear()`                |
// | `push_back(ch)`          | Añade un carácter al final       | `s.push_back('x')`         |
// | `pop_back()`             | Elimina el último carácter       | `s.pop_back()`             |
// | `append(str)`            | Añade al final                   | `s.append("hola")`         |
// | `operator+=`             | Concatenar                       | `s += " mundo"`            |
// | `insert(pos, str)`       | Inserta en posición              | `s.insert(3, "abc")`       |
// | `erase(pos, len)`        | Borra desde `pos`                | `s.erase(2, 4)`            |
// | `replace(pos, len, str)` | Reemplaza parte de la cadena     | `s.replace(0, 4, "Adiós")` |
// | `resize(n)`              | Cambia tamaño (rellena con `\0`) | `s.resize(5)`              |

// ---

// ### 4️⃣ **Búsqueda**

// | Función                    | Descripción                         | Ejemplo                        |
// | -------------------------- | ----------------------------------- | ------------------------------ |
// | `find(str)`                | Posición de la primera ocurrencia   | `s.find("abc")`                |
// | `rfind(str)`               | Última ocurrencia                   | `s.rfind("abc")`               |
// | `find_first_of(chars)`     | Primer carácter que coincide        | `s.find_first_of("aeiou")`     |
// | `find_last_of(chars)`      | Último carácter que coincide        | `s.find_last_of("aeiou")`      |
// | `find_first_not_of(chars)` | Primer carácter que **no** coincide | `s.find_first_not_of("aeiou")` |
// | `find_last_not_of(chars)`  | Último carácter que **no** coincide | `s.find_last_not_of("aeiou")`  |

// ---

// ### 5️⃣ **Subcadenas**

// | Función            | Descripción        | Ejemplo          |
// | ------------------ | ------------------ | ---------------- |
// | `substr(pos, len)` | Devuelve subcadena | `s.substr(2, 4)` |

// ---

// ### 6️⃣ **Comparación**

// | Función                      | Descripción                     | Ejemplo             |
// | ---------------------------- | ------------------------------- | ------------------- |
// | `operator==`, `!=`, `<`, `>` | Comparaciones                   | `if (s == "hola")`  |
// | `compare(str)`               | Devuelve negativo, 0 o positivo | `s.compare("hola")` |

// ---

// ### 7️⃣ **Gestión de memoria**

// | Función           | Descripción              | Ejemplo             |
// | ----------------- | ------------------------ | ------------------- |
// | `reserve(n)`      | Reserva capacidad mínima | `s.reserve(100)`    |
// | `shrink_to_fit()` | Libera memoria extra     | `s.shrink_to_fit()` |

// ---

// 💡 **Ejemplo rápido usando varias funciones**:

// ```cpp
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s = "hola mundo";

//     s.insert(5, "bonito ");  // hola bonito mundo
//     s.erase(5, 7);           // hola mundo
//     s.replace(0, 4, "adios");// adios mundo

//     if (s.find("mundo") != string::npos) {
//         cout << "La palabra 'mundo' está presente\n";
//     }
// }
// ```

// ---

// Si quieres, puedo hacerte un **PDF resumen visual** con **todas las funciones de `std::string` + ejemplos cortos**, listo para tener como referencia rápida en olimpiadas o práctica.
// Así lo tendrías todo en una sola hoja y podrías consultarlo en segundos.

// ¿Quieres que te lo haga?






// Exacto, y ahí está la confusión que mucha gente tiene con `string` en C++.

// 📌 **`std::string` solo viene de `<string>`**, pero otras librerías de la STL añaden funciones que puedes usar *junto con* strings aunque no sean métodos de `std::string`.

// ---

// ### 🔍 Cómo se ve en la práctica

// * **Métodos de `std::string`** → Son parte de la clase `string` y se llaman así:

// ```cpp
// s.substr(0, 3);
// s.find("abc");
// ```

// * **Funciones de otras librerías que trabajan con `string`** → No son métodos, sino funciones independientes que reciben un `string` como parámetro. Ejemplos:

// ```cpp
// #include <algorithm>  // para sort, reverse, etc.
// #include <cctype>     // para isupper, tolower, etc.

// string s = "Hola";

// // Algoritmos sobre strings
// reverse(s.begin(), s.end());   // <algorithm>
// sort(s.begin(), s.end());      // <algorithm>

// // Funciones de <cctype>
// if (isupper(s[0])) { /* ... */ } // Ver si la primera letra es mayúscula
// ```

// ---

// ### 📂 Categorías principales

// #### 1️⃣ **<string>**

// * Todo lo que ya te listé antes (métodos nativos de `std::string`).

// #### 2️⃣ **<algorithm>**

// * Funciones genéricas que funcionan con cualquier contenedor (incluyendo `string`):

//   * `sort(s.begin(), s.end())` → Ordenar letras.
//   * `reverse(s.begin(), s.end())` → Invertir cadena.
//   * `count(s.begin(), s.end(), 'a')` → Contar letras.
//   * `find(s.begin(), s.end(), 'x')` → Buscar carácter.
//   * `unique`, `rotate`, `replace` (versión de `<algorithm>`, diferente a `string::replace`).

// #### 3️⃣ **<cctype>**

// * Funciones para caracteres individuales:

//   * `isupper(ch)` → ¿Es mayúscula?
//   * `islower(ch)` → ¿Es minúscula?
//   * `isdigit(ch)` → ¿Es número?
//   * `tolower(ch)` / `toupper(ch)` → Convertir a minúscula/mayúscula.

// #### 4️⃣ **<sstream>**

// * Conversión entre string y números:

// ```cpp
// #include <sstream>

// string s = "123";
// int x;
// stringstream ss(s);
// ss >> x; // x = 123
// ```

// #### 5️⃣ **<regex>** (expresiones regulares)

// * Búsqueda y reemplazo con patrones avanzados:

// ```cpp
// #include <regex>

// string s = "hola 123 mundo";
// regex r("[0-9]+");
// cout << regex_replace(s, r, "#"); // "hola # mundo"
// ```

// ---

// 💡 Si quieres, te puedo hacer **un cuadro dividido en dos partes**:

// 1. **Métodos nativos de `std::string` (de `<string>`).**
// 2. **Funciones externas de otras librerías que puedes usar con strings.**

// Así quedaría clarísimo qué viene de la clase y qué viene de otros headers.
// ¿Quieres que te lo prepare así?
