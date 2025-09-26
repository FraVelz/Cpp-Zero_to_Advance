#include <iostream>
#include <set>
#include <cctype>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    while (n--) {
        string s; cin >> s;

        set<char> r(s.begin(), s.end());
        cout<<r.size();

        if(n>0) cout<<'\n';
    }

    return 0;
}