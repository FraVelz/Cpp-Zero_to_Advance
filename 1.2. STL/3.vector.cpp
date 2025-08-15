// Perfecto, entonces vamos a hacer con `std::vector` lo mismo que hicimos con `std::string`: primero todo lo que **sí es parte de la clase `vector`** (de la librería `<vector>`), y luego las funciones **de otras librerías** que también puedes usar con vectores.

// ---

// ## 📦 **1. Métodos propios de `std::vector`**

// (Disponibles con `#include <vector>`)

// | Categoría        | Método / Propiedad                 | Descripción                    | Ejemplo                     |
// | ---------------- | ---------------------------------- | ------------------------------ | --------------------------- |
// | **Información**  | `size()`                           | Número de elementos            | `v.size()`                  |
// |                  | `empty()`                          | `true` si no hay elementos     | `v.empty()`                 |
// |                  | `capacity()`                       | Capacidad reservada en memoria | `v.capacity()`              |
// |                  | `max_size()`                       | Máx. elementos posibles        | `v.max_size()`              |
// | **Acceso**       | `operator[]`                       | Acceso rápido (sin chequeo)    | `v[0]`                      |
// |                  | `at(pos)`                          | Acceso con chequeo de rango    | `v.at(2)`                   |
// |                  | `front()`                          | Primer elemento                | `v.front()`                 |
// |                  | `back()`                           | Último elemento                | `v.back()`                  |
// | **Modificación** | `push_back(x)`                     | Añadir al final                | `v.push_back(5)`            |
// |                  | `pop_back()`                       | Quitar último elemento         | `v.pop_back()`              |
// |                  | `insert(pos, x)`                   | Insertar en posición           | `v.insert(v.begin()+2, 10)` |
// |                  | `erase(pos)` / `erase(pos1, pos2)` | Borrar uno o un rango          | `v.erase(v.begin()+3)`      |
// |                  | `clear()`                          | Vaciar vector                  | `v.clear()`                 |
// |                  | `resize(n)`                        | Cambiar tamaño                 | `v.resize(10)`              |
// |                  | `assign(n, val)`                   | Rellenar con valor             | `v.assign(5, 0)`            |
// |                  | `swap(v2)`                         | Intercambiar contenido         | `v.swap(otro)`              |
// | **Memoria**      | `reserve(n)`                       | Reservar espacio               | `v.reserve(1000)`           |
// |                  | `shrink_to_fit()`                  | Liberar espacio extra          | `v.shrink_to_fit()`         |

// ---

// ## 🔍 **Ejemplo usando varios métodos de vector**

// ```cpp
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v = {1, 2, 3};

//     v.push_back(4);           // {1, 2, 3, 4}
//     v.insert(v.begin()+1, 10);// {1, 10, 2, 3, 4}
//     v.erase(v.begin()+2);     // {1, 10, 3, 4}
//     v.resize(6, 0);           // {1, 10, 3, 4, 0, 0}

//     for (int x : v) cout << x << " ";
// }
// ```

// ---

// ## 📂 **2. Funciones de otras librerías que funcionan con vectores**

// (Las más usadas en programación competitiva)

// ### **<algorithm>**

// ```cpp
// #include <algorithm>
// vector<int> v = {3, 1, 4, 1, 5};

// // Ordenar
// sort(v.begin(), v.end());              // Ascendente
// sort(v.rbegin(), v.rend());            // Descendente

// // Invertir
// reverse(v.begin(), v.end());

// // Contar ocurrencias
// int c = count(v.begin(), v.end(), 1);  // cuenta cuántos "1"

// // Buscar elemento
// auto it = find(v.begin(), v.end(), 4);

// // Quitar duplicados (requiere sort previo)
// v.erase(unique(v.begin(), v.end()), v.end());

// // Rotar elementos
// rotate(v.begin(), v.begin()+1, v.end());
// ```

// ---

// ### **<numeric>**

// ```cpp
// #include <numeric>
// vector<int> v = {1, 2, 3, 4};
// int suma = accumulate(v.begin(), v.end(), 0); // suma = 10
// ```

// ---

// ### **<iterator>**

// ```cpp
// #include <iterator>
// vector<int> v = {1, 2, 3};
// copy(v.begin(), v.end(), ostream_iterator<int>(cout, " ")); // imprime: 1 2 3
// ```

// ---

// ### **<random>**

// ```cpp
// #include <random>
// #include <algorithm>
// vector<int> v = {1, 2, 3, 4, 5};

// random_device rd;
// mt19937 g(rd());
// shuffle(v.begin(), v.end(), g); // Mezclar aleatoriamente
// ```

// ---

// 💡 **Diferencia clave**:

// * Lo de `<vector>` es **propio del objeto `std::vector`**.
// * Lo de `<algorithm>`, `<numeric>`, `<random>`, etc. son funciones **externas** que aceptan vectores porque usan iteradores.

// ---

// Si quieres, puedo hacerte **una hoja resumen con TODO sobre `string` y `vector`** separando claramente **métodos propios** y **funciones externas**, así tendrías la referencia completa para C++ competitivo.
// ¿Quieres que te la arme así?
