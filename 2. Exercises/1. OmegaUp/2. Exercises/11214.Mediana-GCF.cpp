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

    sort(arr.begin(), arr.end());
    int ind= n/2;

    if (n & 1) {
        cout<<(arr[ind]);

    } else {
        cout<< ( (arr[ind] + arr[ind-1]) / 2.0);

    }

    return 0;
}