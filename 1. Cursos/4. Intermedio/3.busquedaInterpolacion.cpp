#include <iostream>
#include <vector>

using namespace std;

int searchInterpolation(vector<int> arr, int enc) {
    int high = arr.size()-1, low=0;

    while (enc >= arr[low] && enc <= arr[high] && low<=high ) {
        int probe = low + (high-low) * (enc - arr[low]) / (arr[high] - arr[low]);

        if (arr[probe] == enc) return probe;
        else if (arr[probe] < enc) low = probe + 1;
        else high = probe - 1;
    }

    return -1;

};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {1,2,3,4,5,6,7,8,9};

    int pos = searchInterpolation(arr, 6);

    cout << "Element Index: "<<pos;

    return 0;
}