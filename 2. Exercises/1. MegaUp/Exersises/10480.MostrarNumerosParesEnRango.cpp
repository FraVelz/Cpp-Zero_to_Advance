#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin>>n>>m;

    for (int i=n; i<=m; ++i) {
        if (i%2==0) {
            cout<<i;
            if (i<m-1) cout<<'\n';
        }
    }
    return 0;
}