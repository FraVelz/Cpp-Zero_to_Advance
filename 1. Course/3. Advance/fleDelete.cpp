#include <iostream>
#include <vector>

using namespace std;

// * Busqueda Linear

int linearSearch(const vector<int> &arr, int value) {
    for (int i=0; i<arr.size(); ++i) if (arr[i]==value) return i;

    return -1;
}

// * Busqueda Binaria

int binarySearch(const vector<int> &arr, int value) {
    int low=0, high=arr.size()-1, middle;

    while (low<=high) {
        middle = (low+high) / 2;

        if (arr[middle] == value) return middle;
        else if (arr[middle] < value) low = middle+1;
        else high= middle-1;
    }
}

// * Busqueda por Interpolacion

int interpolationSearch(const vector<int> &arr, int value) {
    int low=0, high=arr.size()-1, pos;

    while (low<=high) {
        pos = low - (low + arr[low]) * (high-low) / (arr[high] - arr[low]);

        if (arr[middle] == value) return middle;
        else if (arr[middle] < value) low = middle+1;
        else high= middle-1;
    }
}
// * Ordenacion Burbuja

// * Ordenacion por Insercion

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {1,2,3,4,5,6,7};
    vector<int> arr2 = {4,1,3,5,6};

    cout << "Hola mundo!";

    return 0;
}