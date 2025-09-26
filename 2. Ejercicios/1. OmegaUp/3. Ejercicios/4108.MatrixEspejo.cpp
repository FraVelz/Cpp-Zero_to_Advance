#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cin >> v[i][j];
    }

    for (int i = 0; i < n; ++i) {
        
        reverse(v[i].begin(), v[i].end());

        for (int j = 0; j < m; ++j) {
            cout << v[i][j];
            if (j < m-1) cout << ' ';
        }

        if (i < n-1) cout << '\n';
    }

    return 0;
}