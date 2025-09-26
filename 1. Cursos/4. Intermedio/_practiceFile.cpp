#include <iostream>
#include <vector>

using namespace std;

// ? Algoritmo de Ordenacion Insercion *******************************

void insertionSort(vector<int> &arr) {
    for (int i=0; i<arr.size(); ++i) {
        int key = arr[i];
        int j = i-1;


        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    }
}

// ? Algoritmo de Busqueda por Interpolacion *************************

int interpolationSearch(const vector<int> &arr, int value) {
    int low = 0, high= arr.size()-1, pos;

    while (low <= high && arr[high] >= value && arr[low] <= value) {
        pos = low + (value - arr[low]) * (high-low) / (arr[high]-arr[low]);
        
        if (arr[pos] == value) return pos;

        else if (arr[pos] > value) high = pos-1;
        else low = pos+1;
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    return 0;
}