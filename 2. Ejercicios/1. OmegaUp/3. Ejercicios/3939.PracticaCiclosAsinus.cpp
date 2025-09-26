#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, r=0;
    cin>>n;

    while (n--) {
        int a; cin >> a;
        r+=a;
    }

    cout << r;

    return 0;
}