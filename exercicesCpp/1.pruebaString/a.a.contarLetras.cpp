#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a; cin >> a;

    int i = 0;
    for (char e : a) ++i;

    cout << i;

    return 0;
}
