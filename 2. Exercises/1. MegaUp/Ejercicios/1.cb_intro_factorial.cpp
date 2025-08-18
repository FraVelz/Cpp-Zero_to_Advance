#include <iostream>

using namespace std;

long long factorial(long long n) {
    if (n == 1 || n == 0) return 1;

    return n * factorial(n - 1);
}

int main() {
    ios_base::sync_with_stdio();
    cin.tie(0);

    long long number; cin >> number;

    cout << factorial(number);

    return 0;
}
