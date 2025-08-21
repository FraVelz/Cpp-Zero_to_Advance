#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    while (n--) {
        int a, b; cin>>a>>b;

        cout<<(a+b);
        if (n > 0) cout<<'\n';
    }

    return 0;
}