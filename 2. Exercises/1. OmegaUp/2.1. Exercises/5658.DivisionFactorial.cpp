#include <iostream>

using namespace std;

int fib(int n) {
    if (n==1) return 1;
    return n * fib(n-1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b; cin>>a>>b;

    cout<< (fib(a) / fib(b));

    return 0;
}
