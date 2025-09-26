#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    vector<int> arr(n);

    for (int i=0; i<n; ++i) cin>>arr[i];

    int n_max = *max_element(arr.begin(), arr.end());
    int n_min = *min_element(arr.begin(), arr.end());

    for (int i=0; i<n; ++i) {
        if (arr[i] == n_min) swap(arr[n-1], arr[i]);
        if (arr[i] == n_max) swap(arr[0], arr[i]);
    }

    for (int i=0; i<n; ++i) {
        cout<<arr[i];
        if (i<n-1) cout<<'\n';
    }

    return 0;
}