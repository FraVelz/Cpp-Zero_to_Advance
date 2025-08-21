#include <iostream>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    for (int i=1; i<=t; ++i) {
        for (int j=1; j<=i; ++j) cout<<i;
        cout<<'\n';
    }

    for (int i=t-1; i>=1; --i) {
        for (int j=i; j>=1; --j) cout<<i;
        if (i > 1) cout<<'\n';
    }

    return 0;
}