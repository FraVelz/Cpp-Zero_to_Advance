#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k, r; cin>>n>>k;

    for (int i=0; i<n; ++i) {
        int a; cin >> a;

        if (i<n-2) r += a;
    }

    cout<<(r/k);

    return 0;
}
