#include <iostream>

using namespace std;

inline int toNumber(int a) { return a - '0'; }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b; cin >> a >> b;
    int res = 0;
    
    for(int i = a.size(); i >= 0; --i) {
        if (toNumber(a[i]) + toNumber(b[i]) >= 10) ++res;
    }

    cout << res;

    return 0;
}