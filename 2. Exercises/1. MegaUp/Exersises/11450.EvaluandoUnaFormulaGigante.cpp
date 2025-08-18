#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    double res, x, y, z; cin >>x>>y>>z;

    res = ((2*x + y) / z) * (y*y*y - z);
    res /= ((x + 2*y + 3*z) / (z - 2*y - 3*x)) +x*x + z*z;

    cout << res;

    return 0;
}