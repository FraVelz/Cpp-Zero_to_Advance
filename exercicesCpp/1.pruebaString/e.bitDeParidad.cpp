#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a; cin >> a;
    int n=0;

    for (char e : a) if (e == '1') ++n;
   cout << a << (n & 1 ? 1 : 0);

    return 0;
}
