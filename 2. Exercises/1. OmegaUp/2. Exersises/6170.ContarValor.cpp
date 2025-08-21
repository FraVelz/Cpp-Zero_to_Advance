#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, res=0; cin>>n;
    vector<int> arr(n);
    
    for (int i=0; i<n; ++i) cin>>arr[i];
    cin>>k;

    for (int x : arr) if (x==k) ++res;

    cout << res;
    return 0;
}