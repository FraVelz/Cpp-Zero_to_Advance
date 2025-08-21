#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p; cin>>n>>p;

    vector<int> arr(n);
    vector<int> pre(p);

    for (int i=0; i<n; ++i) cin>>arr[i];
    for (int i=0; i<p; ++i) cin>>pre[i];

    for (int i=0; i<p; ++i) {
        cout<<arr[pre[i]-1];
        if (i<p-1) cout<<'\n';
    }

    return 0;
}