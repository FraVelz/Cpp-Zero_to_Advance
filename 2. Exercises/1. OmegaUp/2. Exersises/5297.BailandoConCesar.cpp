#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    map<string, string> mp;

    while (n--) {
        string a,b; cin>>a>>b;
        mp[a]=b;
    }

    string r; cin>>r;

    cout<<mp[r];

    return 0;
}