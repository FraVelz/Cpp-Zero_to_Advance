#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    while (n<100) {
        if (n%2 == 0) n+=3;
        else n*=2;
    }

    cout << n;

    return 0;
}