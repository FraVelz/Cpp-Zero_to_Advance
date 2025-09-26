#include <iostream>     // Entrada y Salida por Consola

#include <stack>        // Pila
#include <queue>        // Cola (normal, y priority_queue)
#include <list>         // Lista doblemente enlazada
#include <forward_list> // Lista simplemente enlazada 
#include <vector>       // Vector (Array dinamico)
#include <array>        // Array (Array Estatico)

#include <set>          // SET
#include <map>          // MAP

#include <bitset>       // Arreglo de bits (0-1)

using namespace std;

/*
Estructuras de Datos:
* Lineales
* No lineales

? Lineales ***********************************************************

* Arreglos: 
Coleccion de elementos del mismo tipo almacenados de forma continua en 
la memoria. Por esto es facil acceder a sus elementos pero complicado
en eliminar elementos, y agregar elementos.

* Listas enlazadas:
Cada elemento tiene un apuntador al siguiente elemento. Pueden 
agregarse facilmente elementos y eliminarse.

* Pilas: (Stack)
Primer elemento en entrar es el ultimo en salir.

* Cola: (Queue)
Primer elemento en entrar es el primero en salir.

* Deque: (Cola doble) 
Es una cola en la que puedes insertar y eliminar elementos tanto por 
el frente como por el final.

? No Lineales ********************************************************

* Arboles

* Grafos

* Tablas hash

* ****************************************************************** * 
TODO: Arbol de Como se construyen las estructuras de datos en C++

                [Arreglo / Array]
                       |
        ┌──────────────┼───────────────┐
        |                              |
 [Basado en memoria contigua]     [Basado en punteros]
        |                              |
   ┌────┴─────┐                  ┌─────┴─────┐
   |          |                  |           |
[Vector]  [Matriz]        [Lista enlazada] [Lista doble]
   |          |                  |           |
   |          |                  |           |
[Pila]    [Arreglo 2D+]     [Pila enlazada] [Cola enlazada]
[Cola]                         |
[Deque]                        |
                                └──> [Estructuras más complejas]
                                       ├─ Árbol binario
                                       ├─ Árbol AVL / Red-Black
                                       ├─ Montículos (Heaps)
                                       └─ Grafos
*/ 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // * Pila ********************************************************
    stack<int> pila;
    pila.push(19); // copia el dato, lo mueve y lo agrega
    pila.push(20);
    pila.push(21);

    pila.emplace(22); // Crea el objecto directamente en la lista

    cout<<pila.top(), pila.pop(); // Muestra el elemento en el top
    // y tambien lo elimina.

    cout<<pila.empty(); // Devuelve true si esta vacia la pila
    cout<<pila.size(); // Devuelve el tamaño de la pila

    cout << "Hola mundo!";

    // * Cola ********************************************************
    queue<int> cola;
    cola.push(1); // Mismos funcionamientos que la pila
    cola.push(2);
    cola.emplace(3);

    cout<<cola.front(), cola.pop(); // Primer valor
    cout<<cola.back(); // Ultimo valor

    cout<<cola.empty();
    cout<<cola.size();

    // * Cola con prioridad (mismas funciones que con el queue) ******
    priority_queue<int> cola2; 
    // al agregar ordena los datos por prioridad
    // Mayor a menor

    priority_queue<int, vector<int>, greater<int>> cola3;
    // Menor a mayor

    // * Lista doblemente enlazada ***********************************
    // enlazada con el elemento anterior y con el siguiente elemento
    list<int> lista1 = {1,2,3,4};
    lista1.push_back(10);
    lista1.emplace_front(20);
     
    // Mismas funciones y todo, con la diferencia de que para eliminar
    // y para agregar lo podemos hacer por enfrente(front) o por atras
    // de la lista (back), ademas que en comparacion a las anteriores
    // posee un monton de atributos.

    // * Lista simplemente enlazada **********************************
    // (enlazada con el elemento de adelante)
    // mas ligera en memoria, pero solo con una direccion hacia front
    forward_list<int> lista2 = {1,3,4,5};

    lista2.insert_after(lista2.begin(), 2);
    //inserta despues del 1er elemento

    // * Arrray (arreglo) ********************************************
    array<int, 2> arr = {1,2}; // arreglo + funciones del stl.
    
    // * Vectores (array dinamic) ************************************
    vector<int> vect = {1,2,3,4}; // es como un arreglo pero su tamaño
    // cambia en tiempo de ejecucion dependiendo de lo requerido del 
    // programa

    // ? *************************************************************
    // ? Los siguientes se utilizan para estructuras de datos no *****
    // ? lineales ****************************************************

    // * SET *********************************************************
    set<int> s;

    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(3); // No se repite

    for (int x : s) cout << x << " ";
    cout << "\n";

    if (s.count(3)) cout << "El 3 está en el set\n";

    /*
    * **`unordered_set`** → no mantiene orden, pero inserción/búsqueda 
    * promedio **O(1)**.

    * **`multiset`** → permite elementos repetidos.
    */    

    // * MAP *********************************************************
    map<string, int> m;

    m["uno"] = 1;
    m["dos"] = 2;
    m["tres"] = 3;

    for (auto &p : m)
        cout << p.first << " -> " << p.second << "\n";

    if (m.count("dos"))
        cout << "\"dos\" está en el mapa\n";

    /*
    * **`multimap`** → permite claves repetidas.

    * **`unordered_map`** → no mantiene orden, pero inserción/búsqueda 
    * promedio **O(1)**.
    */


    // * bitset ******************************************************

    // ? Inicializar
    bitset<8> ba;     // 8 bits inicializados en 0 -> 00000000
    bitset<8> bb(5);  // inicializado con valor decimal 5 -> 00000101

    // desde string (se rellena a la izquierda) -> 00001011
    bitset<8> bc("1011");

    // ? Acceso a los bits
    cout << bc[1];    // imprime 1 (el bit en posición 1)
    cout << bc[0];    // imprime 1 (Inidices de Derecha a Izquierda)

    // ? Asignación y consulta
    bb.set();          // todos los bits a 1
    bb.set(2);         // poner en 1 el bit índice 2
    bb.reset();        // todos en 0
    bb.reset(3);       // poner en 0 el bit índice 3
    bb.flip();         // invierte todos los bits
    bb.flip(4);        // invierte solo bit 4

    // ? Conteo
    bb.count();        // número de bits en 1
    bb.size();         // número total de bits (N)

    // ? Conversión
    bb.to_ulong();     // a unsigned long (error si no cabe)
    bb.to_ullong();    // a unsigned long long (error si no cabe)
    bb.to_string();    // a string "00101010"

    // ? Comparación
    bitset<8> x(string("1010"));
    bitset<8> y(string("1100"));
    bitset<8> z(string("1010"));

    cout << (x == z);  // true
    cout << (x == y);  // false

    // ? Operadores bit a bit
    cout << (x & y) << "\n"; // AND  -> 1000
    cout << (x | y) << "\n"; // OR   -> 1110
    cout << (x ^ y) << "\n"; // XOR  -> 0110
    cout << (~x)     << "\n"; // NOT  -> 0101

    // ? desplazamiento
    cout << (x << 2) << "\n"; // 1010 << 2 = 1000
    cout << (y >> 1) << "\n"; // 1100 >> 1 = 0110
    
    return 0;
}