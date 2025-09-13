#include <iostream>
#include <utility>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;   
    map<int, int> reg;

    vector<int> v(n);
    for (int i=0; i<n; ++i) {
        cin >> v[i];

        if ( find(v.begin(), v.end(), v[i]) != v.end() ) {
            reg[v[i]]++;
        }
    }

    int maxn = 0, res;
    for (auto par: reg) {
        if (par.second > maxn) {
            res = par.first;
            maxn = par.second;
        }
    }

    cout << res;

    return 0;
}

// Nombre: Francisco Javier Velez Otavo
// Grado: 1001
// UserOmegaup: Fravelz
// Residencia: Colombia, Bogota DC, San Cristobal

