#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int element, p; cin >> element;
    vector<int> datos;

    while (element--) {
        int dato; cin >> dato;
        datos.push_back(dato);
    }

    cin >> p;

    if (p == 0) {
        for(int num : datos) {
            if (num % 2 == 0) {
                cout << num << ' ';
            }
        }
    } else {
        for(int num : datos) {
            if (num % 2 == 1) {
                cout << num << ' ';
            }
        }
    }

    return 0;
}
