#include <cmath>
#include <iostream>

using namespace std;

int value_(long long n) {
    long long r = ((n-1) % 3 + 3) % 3;
    return int (r + 1);
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long p;

    cin >> n >> p;

    cout << (value_(n-p)) << ' ' << (value_(n+p));

    return 0;
}
