#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b=0,c=0;

    while (cin >> a && a != 0) {
        b += a;
        ++c;
    }

    cout << b << ' ' << c;

    return 0;
}