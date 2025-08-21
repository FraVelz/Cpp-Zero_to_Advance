// TODO: Practicar todo de Array.

//* 1. Máximo y mínimo: Dado un `std::array<int, N>`, imprime el valor
//* máximo y el mínimo.

//* 2. Rotar a la derecha: Rota los elementos del array una posición a 
//* la derecha.

//* 3. Suma acumulada: Reemplaza cada elemento por la suma e todos los
//* anteriores incluyendo él mismo.

//* 4. Invertir orden Invierte el array sin usar funciones de la STL.

//* 5. Contar ocurrencias: Cuenta cuántas veces aparece un número dado
//* en el array

#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);

   // ? 1. Maximo y minimo de un array *******************************
   array<int, 5> arr = {1,2,3,4,5};
   int v_max= *max_element(arr.begin(), arr.end());
   int v_min= *min_element(arr.begin(), arr.end());
   
   cout<<"\nValor Maximo: "<<v_max<<", Valor Minimo: "<<v_min;

   // ? 2. Rotar elementos de un array *******************************

   // ? 3. Suma Acomulada  de un array *******************************
   int sum=0; 
   for (int e: arr) sum+=sum;
   cout<<"\nE";

   // ? 4. Invertir orden  de un array *******************************

   // ? 5. Contar repetidos de un array ******************************
   
   return 0;
}
