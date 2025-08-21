¡Claro! Si estás entrenando para las **Olimpiadas de Informática o 
Matemáticas con C++**, hay un conjunto de **librerías estándar clave** 
que **debes dominar** porque te ayudan a escribir código más 
eficiente, corto y limpio. Aquí te dejo una lista organizada por 
categoría y utilidad:

---

## ✅ 📚 **Lista de librerías útiles para olimpiadas (con explicación)**

### 🔹 1. **Entrada / Salida y tiempo**

| Librería     | Función principal                                         |
| ------------ | --------------------------------------------------------- |
| `<iostream>` | Entrada (`cin`) y salida (`cout`)                         |
| `<iomanip>`  | Control de formato (decimales, alineación, etc.)          |
| `<ctime>`    | Medición de tiempo y generación de semillas para `rand()` |

---

### 🔹 2. **Estructuras de datos dinámicas y STL**

| Librería           | ¿Qué contiene?                                         |
| ------------------ | ------------------------------------------------------ |
| `<vector>`         | Arreglo dinámico (`vector<int>`)                       |
| `<array>`          | Arreglo fijo, versión moderna de C-style arrays        |
| `<deque>`          | Cola doble                                             |
| `<stack>`          | Pila (LIFO)                                            |
| `<queue>`          | Cola (FIFO)                                            |
| `<priority_queue>` | Cola de prioridad (montículo)                          |
| `<set>`            | Conjunto de valores únicos ordenados                   |
| `<unordered_set>`  | Conjunto sin orden, más rápido                         |
| `<map>`            | Diccionario ordenado (clave → valor)                   |
| `<unordered_map>`  | Diccionario sin orden, más rápido                      |
| `<bitset>`         | Arreglo de bits muy útil para representación eficiente |

---

### 🔹 3. **Algoritmos**

| Librería      | ¿Qué incluye?                                                            |
| ------------- | ------------------------------------------------------------------------ |
| `<algorithm>` | Ordenar, buscar, permutar, contar, `min`, `max`, `sort`, `binary_search` |
| `<numeric>`   | `accumulate`, `gcd`, `lcm`, suma parcial, producto parcial               |

---

### 🔹 4. **Matemáticas**

| Librería    | Funciones útiles                                   |
| ----------- | -------------------------------------------------- |
| `<cmath>`   | `sqrt`, `pow`, `abs`, `log`, `floor`, `ceil`, etc. |
| `<cstdlib>` | `rand()`, `abs()`, `exit()`                        |
| `<limits>`  | `INT_MAX`, `INT_MIN`, `numeric_limits<T>::max()`   |

---

### 🔹 5. **Cadenas de texto**

| Librería    | Funciones útiles                                                |
| ----------- | --------------------------------------------------------------- |
| `<string>`  | Clase `string` y sus métodos (`substr`, `find`, `length`, etc.) |
| `<sstream>` | Separar y convertir strings (`stringstream`)                    |

---

## 🧠 Recomendación de estudio:

Para aprenderlas por separado y bien, podrías seguir este **orden 
sugerido**:

1. `iostream` – Entrada y salida básica.

2. `vector` – Arreglos dinámicos.

3. `algorithm` – Funciones esenciales como `sort`, `binary_search`, 
etc.

4. `map`, `set`, `unordered_map`, `unordered_set` – Diccionarios y 
conjuntos.

5. `cmath` y `numeric` – Funciones matemáticas y numéricas.

6. `string` y `sstream` – Manipulación de texto.

7. `priority_queue`, `queue`, `stack`, `deque` – Estructuras 
avanzadas.

8. `bitset` – Para optimización de espacio y algoritmos binarios.

---

## 📦 Tip:

Guarda esta lista y ve creando **una carpeta por librería**, y dentro 
guarda ejemplos de uso, problemas resueltos, y notas personales.

---

Claro, aquí tienes una **lista organizada de funciones estándar de 
C++** muy útiles y rápidas, especialmente para olimpiadas, 
programación competitiva y código optimizado:

---

## 🔹 FUNCIONES DE `<cmath>` (rápidas y útiles para enteros)

| Función     | Uso común                      | Comentario                                                         |     |            |
| ----------- | ------------------------------ | ------------------------------------------------------------------ | --- | ---------- |
| `abs(x)`    | Valor absoluto (\`             | x                                                                  | \`) | Muy rápida |
| `max(a, b)` | Máximo entre dos valores       | Legible y eficiente                                                |     |            |
| `min(a, b)` | Mínimo entre dos valores       | Igual que `max()`                                                  |     |            |
| `pow(a, b)` | Potencia `a^b`                 | ⚠️ Más lento para enteros grandes — usa multiplicaciones si puedes |     |            |
| `sqrt(x)`   | Raíz cuadrada                  | Preciso                                                            |     |            |
| `ceil(x)`   | Redondea hacia arriba          | Útil en divisiones                                                 |     |            |
| `floor(x)`  | Redondea hacia abajo           | Evita usar `int(x)` directamente                                   |     |            |
| `round(x)`  | Redondea al entero más cercano | Para promedios, por ejemplo                                        |     |            |

---

## 🔹 FUNCIONES DE `<algorithm>` (casi obligatorias en competencia)

| Función                                    | Uso                                  | Comentario                             |
| ------------------------------------------ | ------------------------------------ | -------------------------------------- |
| `sort(vec.begin(), vec.end())`             | Ordenar vector                       | Rápida (`O(n log n)`)                  |
| `reverse(vec.begin(), vec.end())`          | Invertir elementos                   | Mucho mejor que escribirlo tú mismo    |
| `count(vec.begin(), vec.end(), valor)`     | Cuenta cuántas veces aparece `valor` | Útil en muchas preguntas de simulación |
| `find(vec.begin(), vec.end(), valor)`      | Busca valor (devuelve iterador)      | Simple y rápido                        |
| `accumulate(vec.begin(), vec.end(), 0)`    | Suma de todos los valores            | Necesita `<numeric>` también           |
| `swap(a, b)`                               | Intercambia valores                  | Mejor que usar variable temporal       |
| `next_permutation(vec.begin(), vec.end())` | Genera la siguiente permutación      | Potente para pruebas con combinaciones |

---

## 🔹 FUNCIONES DE VECTORES (con `#include <vector>`)

| Método             | Uso                         | Comentario                            |
| ------------------ | --------------------------- | ------------------------------------- |
| `vec.push_back(x)` | Añadir al final             | Rápido y eficiente                    |
| `vec.pop_back()`   | Eliminar el último elemento | O(1)                                  |
| `vec.size()`       | Obtener tamaño actual       | Constante                             |
| `vec.clear()`      | Vaciar vector               | O(n), pero eficiente                  |
| `vec[i]`           | Acceder a elemento i-ésimo  | ⚠️ Asegúrate de no salirte del índice |

---

## 🔹 FUNCIONES DE STRINGS (`#include <string>`)

| Función/método                | Uso                                                | Comentario                          |
| ----------------------------- | -------------------------------------------------- | ----------------------------------- |
| `s.length()` / `s.size()`     | Longitud de cadena                                 | Idénticas                           |
| `s.substr(i, len)`            | Substring desde `i` de longitud `len`              | Útil para divisiones                |
| `reverse(s.begin(), s.end())` | Invertir string                                    | Muy útil para palíndromos           |
| `s.find(c)`                   | Posición de `c` en `s` o `string::npos` si no está | Rápido                              |
| `s == t`                      | Comparación directa                                | No uses bucle para comparar strings |

---

## 🧠 Consejos finales

* ✅ **Sí usa funciones estándar si hacen el trabajo más claro y 
rápido.**

* ⚠️ **No uses funciones de punto flotante (`pow`, `sqrt`) con enteros 
grandes en competencias.**

* ✅ Conoce el **costo temporal**: muchas funciones están en `O(n)` o 
`O(log n)`, y son mejores que tus propias versiones.

---

¿Quieres que te dé una versión imprimible o para guardar como guía 
rápida de referencia?
