#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b; cin >> a >> b;

    for (int i = a; i <= b; i++) {cout << i << ' ';};

    return 0;
}