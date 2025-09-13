#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    for (int i=0; i<n; ++i) {
        string a; cin >> a;
        string b="";

        for (char c: a) if (b.find(c) == string::npos) b+=c;
        cout << b.size();

        if (i<n-1) cout << '\n';
    }

    return 0;
}
