#include <iostream>
#include <map>
#include <utility>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    map<string,string> mp;

    for (int i=0; i<n; ++i) {
        string a,b;
        cin >> a >> b;
        mp[a] = b;
    }

    string x; cin >> x;

    cout << mp[x];

    return 0;
}
