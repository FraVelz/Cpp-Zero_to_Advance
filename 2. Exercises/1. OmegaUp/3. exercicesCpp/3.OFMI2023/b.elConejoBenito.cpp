#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, tmp; cin>>n;
    int ttl = n*n;

    if (ttl == 1) {
        cout << 1;
        return 0;
    }

    for (int i=0; i<ttl; ++i) {
        int a; cin>>a;

        if (i==0) tmp=a;
    }

    vector<int> v(n);

    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
        }
    }

    return 0;
}
