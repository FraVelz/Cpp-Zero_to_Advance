// TODO: Biblioteca Algorithm.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void coutArr(vector<int> &arr) {
    for (int e: arr) cout<<e<< ' ';
    cout<<'\n'
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    //* 1. Ordenamiento **********************************************

    vector<int> arr1 = {1,2,3,5,4,3,2,0,1,2,4,6,8,9,7,6};
    
    sort(arr1.begin(), arr1.end()); // Ordena de menor a mayor
    coutArr(arr1);

    sort(arr1.rbegin(), arr1.rend()); // Ordena de mayor a menor 
    coutArr(arr1);

    stable_sort(arr1.begin(), arr1.end()); 
    // Ordena conservando el orden relativo de elementos iguales 


    //* 2. Búsqueda y conteo *****************************************

    | Función                          | Qué hace                                             | Ejemplo                                                                |
    | -------------------------------- | ---------------------------------------------------- | ---------------------------------------------------------------------- |
    | `binary_search(begin, end, val)` | Devuelve `true` si `val` está en contenedor ordenado | `std::binary_search(v.begin(), v.end(), 3);`                           |
    | `find(begin, end, val)`          | Devuelve iterador al primer `val` o `end` si no está | `auto it = std::find(v.begin(), v.end(), 2);`                          |
    | `count(begin, end, val)`         | Cuenta cuántas veces aparece `val`                   | `int c = std::count(v.begin(), v.end(), 2);`                           |
    | `count_if(begin, end, pred)`     | Cuenta elementos que cumplen predicado               | `int c = std::count_if(v.begin(), v.end(), [](int x){ return x>5; });` |

    
     //* 3. Mínimo y máximo ******************************************

    | Función                  | Qué hace                         | Ejemplo                                           |
    | ------------------------ | -------------------------------- | ------------------------------------------------- |
    | `min(a,b)`               | Devuelve el menor                | `int x = std::min(a,b);`                          |
    | `max(a,b)`               | Devuelve el mayor                | `int y = std::max(a,b);`                          |
    | `min_element(begin,end)` | Iterador al mínimo en contenedor | `auto it = std::min_element(v.begin(), v.end());` |
    | `max_element(begin,end)` | Iterador al máximo               | `auto it = std::max_element(v.begin(), v.end());` |

    
     //* 4. Modificación de contenedores *****************************

    | Función                       | Qué hace                                               | Ejemplo                                         |
    | ----------------------------- | ------------------------------------------------------ | ----------------------------------------------- |
    | `reverse(begin,end)`          | Invierte el contenedor                                 | `std::reverse(v.begin(), v.end());`             |
    | `rotate(begin, mid, end)`     | Rota elementos: el que estaba en `mid` queda al inicio | `std::rotate(v.begin(), v.begin()+2, v.end());` |
    | `next_permutation(begin,end)` | Siguiente permutación lexicográfica                    | `std::next_permutation(v.begin(), v.end());`    |
    | `prev_permutation(begin,end)` | Permutación anterior lexicográfica                     | `std::prev_permutation(v.begin(), v.end());`    |

    
     //* 5. Eliminación de elementos *********************************

    | Función                     | Qué hace                                                        | Ejemplo                                                                         |
    | --------------------------- | --------------------------------------------------------------- | ------------------------------------------------------------------------------- |
    | `remove(begin,end,val)`     | “Elimina” elementos (solo mueve los que no coinciden al inicio) | `v.erase(std::remove(v.begin(), v.end(), 2), v.end());`                         |
    | `remove_if(begin,end,pred)` | Igual que remove pero con predicado                             | `v.erase(std::remove_if(v.begin(), v.end(), [](int x){return x<0;}), v.end());` |

    
     //* 6. Operaciones sobre conjuntos (vectores ordenados) *********

    | Función                           | Qué hace                                  | Ejemplo                                                                                      |
    | --------------------------------- | ----------------------------------------- | -------------------------------------------------------------------------------------------- |
    | `set_union(a,b,c)`                | Unión                                     | `std::set_union(a.begin(),a.end(),b.begin(),b.end(), std::back_inserter(c));`                |
    | `set_intersection(a,b,c)`         | Intersección                              | `std::set_intersection(a.begin(),a.end(),b.begin(),b.end(), std::back_inserter(c));`         |
    | `set_difference(a,b,c)`           | Diferencia `a-b`                          | `std::set_difference(a.begin(),a.end(),b.begin(),b.end(), std::back_inserter(c));`           |
    | `set_symmetric_difference(a,b,c)` | Elementos en uno u otro, pero no en ambos | `std::set_symmetric_difference(a.begin(),a.end(),b.begin(),b.end(), std::back_inserter(c));` |

    
     //* 8. Transformaciones y combinaciones *************************

    | Función                         | Qué hace                                                | Ejemplo                                                                |
    | ------------------------------- | ------------------------------------------------------- | ---------------------------------------------------------------------- |
    | `transform(begin,end,out,pred)` | Aplica función a cada elemento y guarda resultado       | `std::transform(v.begin(),v.end(),v.begin(), [](int x){return x*2;});` |
    | `accumulate(begin,end,val)`     | Suma/combina todos los elementos (requiere `<numeric>`) | `int sum = std::accumulate(v.begin(), v.end(), 0);`                    |

    return 0;
}