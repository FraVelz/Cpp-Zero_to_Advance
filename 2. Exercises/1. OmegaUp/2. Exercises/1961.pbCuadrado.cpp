#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector<vector<int>> v(n, vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) cin >> v[j][i];
    }

    for (int j = 0; j < n; ++j) {
        for (int i = n-1; i >= 0; --i) {
            cout << v[j][i];
            if (i > 0) cout << ' ';
        }
        if (j < n-1) cout << '\n';
    }

    return 0;
}