#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string arr[] = {
        "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
        "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"
    };

    int n; 
    cin >> n;

    while (n--) {
        int k; 
        cin >> k;
        if (k < 1 || k > 12) {
            cout << "Error\n";
        } else {
            cout << arr[k-1] << '\n';
        }
    }

    return 0;
}
