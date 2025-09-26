#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y; cin >> x >> y; 

    // XD Me complique demasiado....
    // int res;
    // double vertical = x / 2, horizontal = y / 2;
    
    // bool parX = (x % 2 == 0) ? true : false;
    // bool parY = (y % 2 == 0) ? true : false;

    // if (parX || parY) {
    //     res = (parX) ? x / 2.0 : y / 2.0;
    //     res *= (parX) ? y : x;

    // } else {
    //     int mayor = (x >= y) ? x : y;
    //     int menor = (x <= y) ? x : y;
            
    //     if ((x <= 1 && y <= 1) || (menor == 0)) {
    //         res = 0;

    //     } else {
    //         if (menor == 1) { res = mayor / 2; }

    //         else { res = ((menor / 2) * mayor) + (mayor / 2); }
    //     }
    // }

    cout << (x*y / 2);

    return 0;
}