// En C++ hay **muchas librerías estándar (headers)**, y dependiendo de lo que quieras hacer, unas son más usadas que otras.
// En programación competitiva y desarrollo general las podemos organizar en **categorías** para que no sea una lista caótica.

// ---

// ## 📚 **1. Contenedores y Estructuras de Datos**

// | Librería          | Qué contiene                                       |
// | ----------------- | -------------------------------------------------- |
// | `<vector>`        | Vectores dinámicos (`std::vector`)                 |
// | `<array>`         | Arreglos de tamaño fijo (`std::array`)             |
// | `<deque>`         | Cola doble (`std::deque`)                          |
// | `<list>`          | Lista doblemente enlazada (`std::list`)            |
// | `<forward_list>`  | Lista enlazada simple                              |
// | `<stack>`         | Pila (`std::stack`)                                |
// | `<queue>`         | Cola (`std::queue`, `std::priority_queue`)         |
// | `<set>`           | Conjunto ordenado (`std::set`, `std::multiset`)    |
// | `<unordered_set>` | Conjunto no ordenado (hash)                        |
// | `<map>`           | Diccionario ordenado (`std::map`, `std::multimap`) |
// | `<unordered_map>` | Diccionario no ordenado (hash)                     |
// | `<bitset>`        | Manejo de bits (`std::bitset`)                     |

// ---

// ## 🔍 **2. Algoritmos y utilidades**

// | Librería       | Qué contiene                                                    |
// | -------------- | --------------------------------------------------------------- |
// | `<algorithm>`  | Algoritmos genéricos (`sort`, `reverse`, `find`, `count`, etc.) |
// | `<numeric>`    | Operaciones numéricas (`accumulate`, `gcd`, `lcm`, etc.)        |
// | `<functional>` | Funciones y objetos funcionales (`std::function`, comparadores) |
// | `<iterator>`   | Herramientas para iteradores (`advance`, `distance`)            |
// | `<utility>`    | Utilidades (`std::pair`, `std::move`, `std::swap`)              |
// | `<tuple>`      | Tuplas (`std::tuple`)                                           |

// ---

// ## 🔢 **3. Matemáticas y números**

// | Librería               | Qué contiene                                       |
// | ---------------------- | -------------------------------------------------- |
// | `<cmath>` / `<math.h>` | Funciones matemáticas (`sqrt`, `pow`, `sin`, etc.) |
// | `<cstdlib>`            | Funciones generales (`abs`, `rand`, `malloc`)      |
// | `<complex>`            | Números complejos                                  |
// | `<valarray>`           | Arreglos optimizados para matemáticas              |
// | `<random>`             | Generación aleatoria (`std::mt19937`, `shuffle`)   |
// | `<limits>`             | Límites numéricos (`numeric_limits`)               |

// ---

// ## 📝 **4. Cadenas y texto**

// | Librería        | Qué contiene                                     |
// | --------------- | ------------------------------------------------ |
// | `<string>`      | `std::string` y utilidades                       |
// | `<cstring>`     | Funciones de C para cadenas (`strlen`, `strcpy`) |
// | `<string_view>` | Vista ligera de cadenas sin copiar memoria       |
// | `<sstream>`     | Streams de strings (`std::stringstream`)         |
// | `<regex>`       | Expresiones regulares                            |

// ---

// ## 💻 **5. Entrada/Salida**

// | Librería      | Qué contiene                               |
// | ------------- | ------------------------------------------ |
// | `<iostream>`  | Entrada/salida estándar (`cin`, `cout`)    |
// | `<iomanip>`   | Formato de salida (`setw`, `setprecision`) |
// | `<fstream>`   | Entrada/salida en archivos                 |
// | `<cstdio>`    | Funciones C (`printf`, `scanf`)            |
// | `<streambuf>` | Buffers de stream                          |

// ---

// ## 🛠 **6. Misceláneo**

// | Librería               | Qué contiene                                               |
// | ---------------------- | ---------------------------------------------------------- |
// | `<chrono>`             | Tiempo y fechas (`std::chrono`)                            |
// | `<thread>`             | Multihilo (`std::thread`)                                  |
// | `<mutex>`              | Sincronización de hilos                                    |
// | `<condition_variable>` | Comunicación entre hilos                                   |
// | `<atomic>`             | Operaciones atómicas                                       |
// | `<type_traits>`        | Metaprogramación y propiedades de tipos                    |
// | `<memory>`             | Gestión de memoria (`std::unique_ptr`, `std::shared_ptr`)  |
// | `<new>`                | Sobrecarga de operadores `new`/`delete`                    |
// | `<exception>`          | Manejo de excepciones                                      |
// | `<stdexcept>`          | Tipos de excepciones (`runtime_error`, etc.)               |
// | `<bit>`                | Operaciones de bits (`popcount`, `rotl`, etc. desde C++20) |

// ---

// 💡 En **programación competitiva**, lo que más se usa está en:
// `<vector>`, `<string>`, `<set>`, `<map>`, `<unordered_map>`, `<algorithm>`, `<numeric>`, `<cmath>`, `<bitset>`, `<random>`.

// En cambio, para **desarrollo de software más grande**, se usan también `<thread>`, `<chrono>`, `<memory>`, `<regex>`, `<filesystem>`, etc.

// ---

// Si quieres, puedo hacerte **un diagrama visual** que muestre todas las librerías agrupadas por función, con las más importantes resaltadas para C++ competitivo y las que son más de desarrollo general.
// Así las podrías aprender en orden de prioridad.

// ¿Quieres que te lo arme así?
