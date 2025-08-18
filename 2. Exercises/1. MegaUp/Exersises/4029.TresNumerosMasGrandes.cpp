#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    vector<int> arr(n);

    for (int i=0; i<n; ++i) cin>>arr[i];

    for (int i=0; i<n; ++i) {
        for (int j=0; j<n-i-1; ++j) {
            if (arr[j] < arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }

    int cont=0;
    for (int e : arr) {
        cout<<e;

        if (cont<2) cout<<'\n';
        if (cont++ == 2) break;
    }

    return 0;
}