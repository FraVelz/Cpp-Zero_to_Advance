#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    vector<int> res(10, 0);

    while (n--) {
        string a; cin >> a;
        
        for (int i=0; i<10; ++i) {
            res[i] += count(a.begin(), a.end(),char('0' + i));
        }
    }

    for (int i=0; i<10; ++i) {
        cout<<res[i]<<'-'<<i<<'s';
        if (i<9) cout<<'\n';
    }

    return 0;
}