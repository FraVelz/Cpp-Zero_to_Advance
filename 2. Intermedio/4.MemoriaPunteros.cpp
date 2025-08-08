// Claro. Vamos a repasar paso a paso todo lo que mencionaste en **“Nivel 2 – Dominio de memoria y punteros”**, de forma clara, con ejemplos y explicaciones prácticas en C y C++.

// ---

// ## 🧠 NIVEL 2 – DOMINIO DE MEMORIA Y PUNTEROS

// ---

// ### 🟩 1. **Punteros**

// #### ✅ ¿Qué es un puntero?

// Un puntero es una variable que **guarda la dirección de memoria** de otra variable.

// ```cpp
// int x = 10;
// int* p = &x;  // p apunta a la dirección de x
// ```

// | Expresión | Significado                                |
// | --------- | ------------------------------------------ |
// | `p`       | Dirección de `x`                           |
// | `*p`      | Valor que hay en esa dirección, o sea, `x` |
// | `&x`      | Dirección de memoria de `x`                |

// #### ✅ Acceso con `*p` y `p[i]`

// ```cpp
// int arr[] = {1, 2, 3};
// int* p = arr;

// std::cout << p[0];   // imprime 1
// std::cout << *p;     // también imprime 1
// std::cout << *(p+1); // imprime 2
// ```

// `p[i]` es equivalente a `*(p + i)`

// ---

// ### 🟩 2. **Relación con arreglos**

// Un arreglo **decay** (se convierte) en un puntero al primer elemento:

// ```cpp
// int arr[3] = {5, 10, 15};
// int* p = arr; // mismo que &arr[0]
// ```

// Esto significa que puedes recorrerlo con punteros:

// ```cpp
// for (int i = 0; i < 3; i++) {
//     std::cout << *(p + i) << " ";
// }
// ```

// ---

// ### 🟩 3. **Aritmética de punteros**

// #### ✅ Sumar punteros:

// ```cpp
// int a[] = {10, 20, 30};
// int* p = a;

// p + 1   → dirección del siguiente entero (4 bytes después en int)
// *(p+1)  → valor del segundo elemento (20)
// ```

// #### ✅ Diferencias entre punteros:

// ```cpp
// int* p1 = &a[0];
// int* p2 = &a[2];

// int diff = p2 - p1; // Resultado: 2 (cantidad de elementos de diferencia)
// ```

// ---

// ### 🟩 4. **Arreglos dinámicos**

// #### ✅ En **C**:

// ```c
// int* arr = (int*)malloc(5 * sizeof(int)); // reserva 5 enteros

// if (arr == NULL) {
//     // No hay memoria
// }
// free(arr); // libera memoria
// ```

// * `malloc`: reserva memoria sin inicializar
// * `calloc`: igual que malloc, pero inicializa en 0
// * `free`: libera la memoria

// #### ✅ En **C++**:

// ```cpp
// int* arr = new int[5];  // reserva 5 enteros
// delete[] arr;           // libera memoria
// ```

// ⚠️ No mezcles `malloc/free` con `new/delete`.

// ---

// ### 🟩 5. **Errores comunes**

// #### ❌ Desbordamiento de arreglo

// Acceder más allá de los límites del arreglo:

// ```cpp
// int arr[3] = {1, 2, 3};
// arr[5] = 10;  // ❌ acceso fuera de límites → comportamiento indefinido
// ```

// #### ❌ Segmentation Fault

// Ocurre cuando accedes a memoria no permitida:

// ```cpp
// int* p = NULL;
// *p = 10; // ❌ segmentation fault
// ```

// ---

// ### 🟩 6. **Inicializar variables siempre**

// Muchos errores vienen de usar variables sin inicializar:

// ```cpp
// int* p;   // no está inicializado
// *p = 20;  // ❌ puede crashear

// int* q = new int; // ✅ reservado
// *q = 20;          // ✅ seguro
// ```

// También se recomienda:

// ```cpp
// int arr[100] = {}; // ✅ todos los valores son 0
// ```

// ---

// ### 🟩 7. **Uso correcto de índices**

// Siempre asegúrate de que el índice esté dentro del rango:

// ```cpp
// for (int i = 0; i < n; ++i) {
//     arr[i]; // ✅ si i < n
// }
// ```

// ---

// ## ✅ Resumen visual:

// | Tema                 | Clave                            |
// | -------------------- | -------------------------------- |
// | `int* p = &x`        | Guarda dirección de `x`          |
// | `*p`                 | Accede al valor de esa dirección |
// | `p[i]`               | Es igual a `*(p + i)`            |
// | `malloc` / `new`     | Reserva memoria dinámica         |
// | `free` / `delete`    | Libera la memoria                |
// | `\0`                 | Final obligatorio en cadenas     |
// | `Segmentation Fault` | Acceso inválido a memoria        |
// | `int arr[100] = {};` | Inicializa todos a 0             |

// ---

// ¿Quieres que te dé ejercicios o errores clásicos para practicar estos conceptos con punteros y memoria?
