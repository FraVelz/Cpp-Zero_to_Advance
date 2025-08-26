#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n >> ws;

    while (n--) {
        string s; getline(cin, s);

        int res = count(s.begin(), s.end(), ' ');
        cout<<res;

        if (n>0) cout<<'\n';
    }

    return 0;
}