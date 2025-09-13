#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a; cin >> a;

    for (int i=0; i<a.length(); ++i) {
        cout << a[i];
        if (i<a.length()-1) cout << '\n';
    }

    return 0;
}
