#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    n = ( (n * 567) / 9 + 7492 ) * 235;
    n /= 47;
    n -= 498;

    cout << (n & 1 ? "Impar" : "Par");

    return 0;
}
