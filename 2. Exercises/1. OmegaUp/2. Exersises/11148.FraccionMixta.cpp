#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b; cin >> a >> b;

    if ( a % b == 0) cout << a/b;
    else {
        cout << a/b << ' ' << a%b << '/' << b;
   } 

    return 0;
}