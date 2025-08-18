#include <cstdio>

int main() {
    int arr[] = {4, 5, 2, 3, 1, 6, 9, 1};
    int len = 8;

    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len-i-1; j++){

            if (arr[i] > arr[j+1]) {
                arr[j] = arr[j+1];
            }
        }
    }

    return 0;
}