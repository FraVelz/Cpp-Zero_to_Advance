#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; cin>>n>>k;
    long long pot=1;

    for (int i=0; i < k; ++i) {
        pot*=n;
        cout<<pot;
        if (i < k-1) cout<<'\n';
    }

    return 0;
}