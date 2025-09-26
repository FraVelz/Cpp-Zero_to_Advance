# Consejos

> **Nota:** Archivo generado con IA.

En programación competitiva, lo más importante para resolver los problemas no es solo saber programar, sino **pensar como matemático y como ingeniero al mismo tiempo**. Te resumo lo clave:

---

### 🔑 1. **Comprensión del problema**

* Leer el enunciado con calma (muchas veces los errores vienen de interpretar mal).
* Identificar **qué te piden exactamente** (output), **qué te dan** (input), y las **restricciones** (tamaños, límites de tiempo y memoria).
* Traducir la historia del enunciado a **lenguaje matemático/lógico** (ejemplo: “siempre es par” → $n \equiv 0 \pmod{2}$).

---

### 🔑 2. **Análisis de restricciones**

* Revisar los límites: ¿el número máximo es $10^5$, $10^6$ o $10^9$?
* Esto define qué algoritmos son viables. Ejemplo:

  * Si $n = 10^5$ → $O(n \log n)$ está bien.
  * Si $n = 10^9$ → necesitas algo $O(1)$, $O(\log n)$ o matemáticas directas.
* Pensar en el **tiempo de ejecución** y **uso de memoria** antes de programar.

---

### 🔑 3. **Conocimiento de algoritmos y estructuras**

Tener un arsenal mental de herramientas:

* **Estructuras**: arreglos, pilas, colas, listas, árboles, heaps, grafos, bitmasks.
* **Algoritmos clásicos**: búsqueda binaria, BFS/DFS, dijkstra, union-find, segment tree, DP.
* **Técnicas**: greedy, divide & conquer, programación dinámica, backtracking, teoría de números (modular, primos, gcd), combinatoria.

---

### 🔑 4. **Habilidad de descomposición**

* Romper un problema difícil en **subproblemas manejables**.
* Ejemplo: un problema de grafos puede reducirse a:

  1. Representar el grafo.
  2. Buscar caminos (DFS/BFS).
  3. Optimizar (shortest path, max flow).

---

### 🔑 5. **Práctica de implementación**

* Escribir código **rápido, limpio y sin bugs**.
* Uso de **plantillas propias** (lectura rápida, funciones útiles).
* Conocer bien el lenguaje (en tu caso C++): punteros, arrays dinámicos, I/O rápido, operaciones bit a bit, etc.

---

### 🔑 6. **Matemáticas**

En competencias avanzadas, los problemas suelen necesitar:

* **Aritmética modular**
* **Combinatoria**
* **Teoría de grafos**
* **Probabilidad básica**
* **Geometría computacional**

---

### 🔑 7. **Estrategia en el concurso**

* Resolver primero los **problemas fáciles** para asegurar puntos.
* No atascarse en uno solo; administrar bien el tiempo.
* Revisar casos extremos: valores mínimos y máximos, entradas raras (ej. todos iguales, vacíos, números grandes).

---

👉 En resumen: lo más importante es **entender bien el problema, analizar límites, tener un repertorio de algoritmos/matemáticas, y practicar mucho** para unir todo en código rápido y correcto.

---

[Ir a la página principal.](https://github.com/FraVelz/Cpp-Zero_to_Advance?tab=readme-ov-file#informaci%C3%B3n)

> **Autor:** Fravelz
