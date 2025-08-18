// TODO: Practicar todo de Array.

//## **1. `std::array` (tamaño fijo, acceso rápido)**
//1. **Máximo y mínimo**
   //* Dado un `std::array<int, N>`, imprime el valor máximo y el mínimo.

//2. **Rotar a la derecha**
   //* Rota los elementos del array una posición a la derecha.

//3. **Suma acumulada**
   //* Reemplaza cada elemento por la suma e todos los anteriores incluyendo él mismo.

//4. **Invertir orden**
   //* Invierte el array sin usar funciones de la STL.

//5. **Contar ocurrencias**
   //* Cuenta cuántas veces aparece un número dado en el array

#include <iostream>
#include <array>

using namespace std;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);

   const int n = 10;
   array<int, n> a;

   for (int i = 0; i < 10; ++i) {
      a[i] = i*i;
   }
   cout << "Hola mundo!";

   return 0;
}
