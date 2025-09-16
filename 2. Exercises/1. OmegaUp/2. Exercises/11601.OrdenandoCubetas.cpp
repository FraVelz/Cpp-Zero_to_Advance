#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin>>n>>m;
    vector<int> arr(n);
    map<int, int> a;

    for (int i=0; i<n; ++i) cin>>arr[i];

    for (int i=1; i<=m; i++) a[i] = 0;

    for (int e : arr) a[e]++;

    for (int i=1; i<=m; ++i) cout<<i<<": "<<a[i]<<'\n';

    return 0;
}