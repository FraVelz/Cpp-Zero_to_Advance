#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b, c; cin >> a >> b >> c;

    
    if (b != 0) {
        double res1 = (a / (double)b ) + c, res2 = (a / (double)b ) - c;

        cout << res1 << ' ' << res2;

    } else {
        cout << "indefinido";
    }

    return 0;
}