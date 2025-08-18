#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    vector<int> a(n/2);
    vector<int> b(n/2);

    for (int i=0; i<(n/2); ++i) cin>>a[i];
    for (int i=0; i<(n/2); ++i) cin>>b[i];

    for (int i=0, j=n/2; i<n/2; ++i, --j) {
        cout<<(a[i]+b[j-1]);
        if ( i < (n/2)-1 ) cout<<' ';
    }
    return 0;
}