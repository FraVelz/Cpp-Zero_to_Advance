#include <iostream>
#include <stack>
#include <queue>
#include <list>
#include <forward_list>
#include <vector>
#include <array>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // Pila 
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

    // Cola 
    queue<int> cola;
    cola.push(1); // Mismos funcionamientos que la pila
    cola.push(2);
    cola.emplace(3);

    cout<<cola.front(), cola.pop(); // Primer valor
    cout<<cola.back(); // Ultimo valor

    cout<<cola.empty();
    cout<<cola.size();

    // Cola con prioridad (mismas funciones que con el queue)
    priority_queue<int> cola2; // al agregar ordena los datos por prioridad
    // Mayor a menor

    priority_queue<int, vector<int>, greater<int>> cola3;
    // Menor a mayor

    // Lista doblemente enlazada
    // enlazada con el elemento anterior y con el siguiente elemento
    list<int> lista1 = {1,2,3,4};
    lista1.push_back(10);
    lista1.emplace_front(20);
     
    // Mismas funciones y todo, con la diferencia de que para eliminar
    // y para agregar lo podemos hacer por enfrente(front) o por atras
    // de la lista (back), ademas que en comparacion a las anteriores
    // posee un monton de atributos.

    // Lista simplemente enlazada (enlazada con el elemento de adelante)
    // mas ligera en memoria, pero solo con una direccion hacia front
    forward_list<int> lista2 = {1,3,4,5};

    lista2.insert_after(lista2.begin(), 2);
    //inserta despues del 1er elemento

    // arreglo (array)
    array<int, 2> arr = {1,2}; // arreglo + funciones del stl.
    
    // vectores (array dinamic)
    vector<int> vect = {1,2,3,4}; // es como un arreglo pero su tamaño
    // cambia en tiempo de ejecucion dependiendo de lo requerido del 
    // programa

    
    return 0;
}