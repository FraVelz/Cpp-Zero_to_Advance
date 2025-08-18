#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b; cin>>a>>b;

    if (a+b == 5) {
        cout<<(2*a + (b+3));

    } else {
        --a;
        cout<< ((7*a + b)% 2 == 0  ? a-b : a*b);
    }

    return 0;
}