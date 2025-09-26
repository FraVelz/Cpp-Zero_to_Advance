#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    vector<int> arr(n);

    for (int i=0; i<n; ++i) cin>>arr[i];

    sort(arr.rbegin(), arr.rend());

    int res=INT_MAX;
    for (int i=0; i<n-1; ++i) {
        if (arr[i]-arr[i+1] < res) res = arr[i]-arr[i+1];
    }
    cout<<res;

    return 0;
}