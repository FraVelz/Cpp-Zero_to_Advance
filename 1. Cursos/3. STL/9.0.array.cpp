// TODO: Biblioteca Algorithm.

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

void coutArr(vector<int> &arr) {
    for (int e: arr) cout<<e<< ' ';
    cout<<'\n';
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

    // Ordena conservando el orden relativo de elementos iguales 
    stable_sort(arr1.begin(), arr1.end()); 

    //* 2. Búsqueda y conteo *****************************************
    
    vector<int> v = {1,2,3,5,4,3,2,6,8,9,7,6};

    //Devuelve `true` si `val` está en contenedor ordenado 
    binary_search(v.begin(), v.end(), 3);
    
    //Devuelve iterador al primer `val` o `end` si no está 
    auto it = find(v.begin(), v.end(), 2);
    
    //Cuenta cuántas veces aparece `val`                   
    int a1= count(v.begin(), v.end(), 2);
    
    //Cuenta elementos que cumplen predicado               
    int a2= count_if(v.begin(), v.end(), [](int x){ return x>5; });

    //* 3. Mínimo y máximo *******************************************
    // Devuelve el menor
    int x = min(10,20);

    // Devuelve el mayor
    int y = max(10,20);

    // Iterador al mínimo en contenedor
    auto n_min = min_element(v.begin(), v.end());

    // Iterador al máximo
    auto n_max = max_element(v.begin(), v.end());

    //* 4. Modificación de contenedores ******************************

    // Invierte el contenedor
    reverse(v.begin(), v.end());

    // Rota elementos: el que estaba en `mid` queda al 
    rotate(v.begin(), v.begin()+2, v.end());

    // Siguiente permutación lexicográfica
    next_permutation(v.begin(), v.end());

    // Permutación anterior lexicográfica
    prev_permutation(v.begin(), v.end());

    //* 5. Eliminación de elementos **********************************

    // “Elimina” elementos (solo mueve los que no coinciden al inicio
    v.erase(remove(v.begin(), v.end(), 2), v.end());

    // Igual que remove pero con predicado
    v.erase(remove_if(v.begin(), v.end(), [](int x){return x<0;}), v.end());

    
    //* 6. Operaciones sobre conjuntos (vectores ordenados) *********

    vector<int> a={1,3,6,9};
    vector<int> b={0,2,4,6};
    vector<int> c;

    // Unión
    set_union(a.begin(),a.end(),b.begin(),b.end(), back_inserter(c));
   
    // Intersección
    set_intersection(a.begin(),a.end(),b.begin(),b.end(), back_inserter(c));
   
    // Diferencia `a-b`
    set_difference(a.begin(),a.end(),b.begin(),b.end(), back_inserter(c));
   
    // Elementos en uno u otro, pero no en otro
    set_symmetric_difference(a.begin(),a.end(),b.begin(),b.end(), back_inserter(c));

    //* 8. Transformaciones y combinaciones *************************

    // Aelica función a cada elemento y guarda resultado      
    transform(v.begin(),v.end(),v.begin(), [](int x){return x*2;});

    // Suma/combina todos los elementos (requiere `<numeric>`)
    int sum = accumulate(v.begin(), v.end(), 0);

    return 0;
}