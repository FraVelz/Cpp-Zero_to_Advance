#include <vector>
#include <iostream>

using namespace std;

// Función para fusionar dos mitades ordenadas
void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Crear arreglos temporales
    vector<int> L(n1), R(n2);

    // Copiar datos
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i];

    // Fusionar arreglos temporales
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }

    // Copiar elementos restantes
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

// Función recursiva de Merge Sort
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Ordenar mitades
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Fusionar mitades
        merge(arr, left, mid, right);
    }
}

int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

    cout << "Arreglo original:\n";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Arreglo ordenado con Merge Sort:\n";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    return 0;
}
