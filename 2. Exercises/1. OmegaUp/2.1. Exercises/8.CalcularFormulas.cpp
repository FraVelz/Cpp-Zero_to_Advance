#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, counter = 0; cin >> n;
    
    n = (n % 2 == 0) ? n/2 : ++n;
    ++counter;

    if (n >= 100 && n <= 999) { ++counter; n /= 100; }
    if (n >= 10 && n <= 99) { ++counter; n /= 10; }

    if (n % 3 == 0) { ++counter; --n; }

    cout << n << ' ' << counter;

    return 0;
}