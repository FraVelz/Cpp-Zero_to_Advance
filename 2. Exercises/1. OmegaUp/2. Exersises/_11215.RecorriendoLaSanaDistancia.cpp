#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, res; cin >> n;
    res = n;

    for (int i=n-1; i >= 1; --i) res += res*i; 

    cout << res+1+n;

    return 0;
}