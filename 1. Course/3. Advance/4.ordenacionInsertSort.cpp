#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {3,2,5,1,4};

    for (int i=1; i<arr.size(); ++i) {
        int key=arr[i];
        int j=i-1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }

    for (int c : arr) cout<<c<<' ';

    return 0;
}