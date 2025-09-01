#include <iostream>

using namespace std;

int suma(int a) {
    int res = 0;
    for (int i=1; i<=a; i++) res += i;
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m, res = 0; cin >> n >> m;

    for (int i=n; i<=m; i++) res += suma(i);

    cout<<res;

    return 0;
}