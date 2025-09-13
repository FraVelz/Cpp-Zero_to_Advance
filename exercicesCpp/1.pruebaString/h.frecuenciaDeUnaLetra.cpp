#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char l; string p;
    cin >> p >> l; 

    int n=0;
    for (char c : p) if (c == l) ++n;
    cout << n;

    return 0;
}
