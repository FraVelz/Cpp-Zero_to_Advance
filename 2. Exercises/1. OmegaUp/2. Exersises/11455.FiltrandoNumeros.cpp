#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int cantidad, datos[100], k; cin >> cantidad;

    for (int i = 0; i < cantidad; ++i) {
        cin >> datos[i]; 
    }

    cin >> k;

    for (int i = 0; i < cantidad; ++i) {
        cout << (datos[i] % k == 0) ? datos[i] : 'X' << ' ';
    }

    return 0;
}