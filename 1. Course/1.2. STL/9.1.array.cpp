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
#include <numeric>
#include <algorithm>

using namespace std;

template <class T>
void mostrarArreglo(const T &arr) {
   for (auto x: arr) cout<<x<<' ';
   cout<<'\n';
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);

   array<int, 5> arr = {1,2,3,4,5};

   cout<<"\n 0> Array:";
   mostrarArreglo(arr);

   // ? 1. Maximo y minimo de un array *******************************

   int v_max= *max_element(arr.begin(), arr.end());
   int v_min= *min_element(arr.begin(), arr.end());

   
   cout<<"\n 1> Valor Maximo: "<<v_max<<", Valor Minimo: "<<v_min;

   // ? 2. Rotar elementos de un array *******************************
   // 2 posiciones a la izquierda.
   rotate(arr.begin(), arr.begin()+2, arr.end());

   cout<<"\n 2> Array rotado: ";
   mostrarArreglo(arr);

   // ? 3. Suma Acomulada  de un array *******************************
   int sum = accumulate(arr.begin(), arr.end(), 0);

   cout<<"\n 3> Suma acomulada del array: "<<sum;

   // ? 4. Invertir orden  de un array *******************************
   reverse(arr.begin(), arr.end());

   cout<<"\n 4> Orden invertido del array: ";
   mostrarArreglo(arr);

   // ? 5. Contar repetidos de un array ******************************
   int res=0;

   for (int e : arr) if (count(arr.begin(), arr.end(), e) > 1) ++res;
   
   cout<<"\n 5> Elementos repetidos: "<<res;

   return 0;
}
