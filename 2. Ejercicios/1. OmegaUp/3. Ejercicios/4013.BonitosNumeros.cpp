#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    while (n--) {
        string a;cin>>a;

        cout << (a.length() % 2 == 0 ? "SI" : "NO");
        if (n>0) cout<<'\n';
    }

    return 0;
}