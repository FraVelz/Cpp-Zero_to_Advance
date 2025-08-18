#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin>>n;
    vector<int> arr(n);
    vector<int> arr1(n);

    for (int i=0; i<n; ++i) cin>>arr[i];
    for (int i=0; i<n; ++i) cin>>arr1[i];
    
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n-i-1; ++j) {
            if (arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }

    for (int i=0; i<n; ++i) {
        for (int j=0; j<n-i-1; ++j) {
            if (arr1[j] > arr1[j+1]) swap(arr1[j], arr1[j+1]);
        }
    }

    bool band=true;
    for (int i=0; i<n; ++i) if (arr[i] != arr1[i]) band=false;

    cout<<(band ? "SI" : "NO");

    return 0;
}