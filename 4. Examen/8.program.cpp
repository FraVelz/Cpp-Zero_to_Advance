#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    map<string, int> mp;

    for (int i = 0; i < n; i++) {
        string s; 
        cin >> s;

        sort(s.begin(), s.end());
        mp[s]++;
    }

    int res=0;
    for (auto &par : mp) {
        if (par.second%2 == 0) res += par.second/2;
    }

    cout << res;

    return 0;
}

// Nombre: Francisco Javier Velez Otavo
// Grado: 1001
// UserOmegaup: Fravelz
// Residencia: Colombia, Bogota DC, San Cristobal

