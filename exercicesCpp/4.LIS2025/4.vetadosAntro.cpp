#include <array>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> res;

    for (int i=0; i<10; ++i) {
        string a; cin >> a;
        if (a!="Santiago" && a!="Pedro" && a!="Ariadna" &&
            a!="Marco"    && a!="Juan"  && a!="Angel"
        ) {
            res.push_back(a);
        }
    }

    reverse(res.begin(), res.end());

    cout<<res.size()<<'\n';

    for (int i=0; i<res.size(); ++i) {
        cout<<res[i];
        if (i<res.size()-1) cout<<'\n';
    }

    return 0;
}

