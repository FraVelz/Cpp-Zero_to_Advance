#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; cin>>n;
    vector<int> a(n);

    for (int i=0; i<n; i++) cin>>a[i];
    cin>>k;

    for (int e : a) {
        if (e <= k+3 && (e >= k-3) ) cout<<e<<' ';
    }

    return 0;
}