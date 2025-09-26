#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int f; cin >> f;
    f = ((5 * (f - 32)) / 9);

    cout << f << ' ';

    cout << (f <= 36 ? 0 : 1); 

    return 0;
}