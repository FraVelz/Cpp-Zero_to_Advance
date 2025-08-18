#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int m,n; cin>>n;
    vector<int> arr(n);

    for (int i=0; i<n; ++i) cin>>arr[i];
    cin>>m;

    for (int i=m; i<n; ++i) {
        cout<<arr[i];
        if (i<n-1) cout<<' ';
    }

    return 0;
}