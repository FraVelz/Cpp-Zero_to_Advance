#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b; cin >> a >> b;

    for (int i = 1; i <= b; i++) {
        if (i * a > b) break;
        else cout << i*a << ' ';
    };

    return 0;
}