/*
 * A diferencia de las estructuras de datos tradicionales, 
 * esas estructuras auxiliares no son contenedores grandes como las
 * estructuras de datos.
*/

#include <iostream>
#include <optional>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << "Hola mundo!";

    // ? pair<T1, T2> ************************************************

    // * solo 1 par de valores

    pair<int, string> p = {1, "Hola"};
    cout << p.first << " " << p.second; // 1 Hola

    // ? tuple<Ts...> ************************************************

    /*
    * Como `pair`, pero con **más de dos valores**.
    * Se accede con `get<i>(t)`.
    */
   
    tuple<int, string, double> t = {1, "Hola", 3.14};
    cout << get<1>(t); // Hola

    // ? optional<T> (C++17) *****************************************

    /*
    * Representa un valor que **puede existir o no**.
    * Útil para evitar usar punteros nulos o valores especiales.
    */

    optional<int> x;     // vacío
    x = 42;              // ahora tiene valor
    if (x) cout << *x;   // imprime 42

    ### ✅ `variant<Ts...>` (C++17)

    * Guarda **uno de varios tipos posibles** (como una “unión segura”).
    * Se accede con `std::get<T>(v)`.

    ```cpp
    variant<int, string> v;
    v = 10;
    cout << get<int>(v);   // 10
    v = "Hola";
    cout << get<string>(v); // Hola
    ```

    ---

    ### ✅ `any` (C++17)

    * Puede guardar **cualquier tipo**, pero es menos seguro que `variant`.
    * Se accede con `any_cast<T>(a)`.

    ```cpp
    any a = 5;
    cout << any_cast<int>(a); // 5
    a = string("Hola");
    cout << any_cast<string>(a); // Hola
    ```

    ---

    # 🔹 7. Estructuras de Memoria / Bajo Nivel

    Estas son para trabajar **más cerca del manejo de memoria**.

    ### ✅ `valarray<T>`

    * Como un `vector`, pero pensado para **operaciones matemáticas rápidas** en arreglos.

    ```cpp
    valarray<int> v = {1, 2, 3};
    valarray<int> w = {4, 5, 6};
    valarray<int> suma = v + w; // {5, 7, 9}
    ```

    ---

    ### ✅ `initializer_list<T>`

    * Permite pasar listas `{}` como parámetros a funciones.

    ```cpp
    void f(initializer_list<int> l) {
        for (int x : l) cout << x << " ";
    }
    f({1, 2, 3}); // imprime: 1 2 3
    ```

    ---

    ### ✅ Smart Pointers (`memory`)

    * Son **punteros inteligentes** que gestionan memoria automáticamente.
    * Tipos principales:

    * `unique_ptr<T>` → un único dueño del recurso.
    * `shared_ptr<T>` → varios dueños (contador de referencias).
    * `weak_ptr<T>` → puntero “débil” que no mantiene vivo el recurso.

    Ejemplo:

    ```cpp
    #include <memory>
    using namespace std;

    int main() {
        unique_ptr<int> p1 = make_unique<int>(10);
        cout << *p1; // 10
    } // al salir del main, p1 libera memoria automáticamente

    return 0;
}