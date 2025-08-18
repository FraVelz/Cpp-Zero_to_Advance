#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, pos = 0; cin >> n;
    vector<pair<int, int >> a(n);

    for (int i = 0; i < n; ++i) cin >> a[i].first >> a[i].second;

    sort(a.begin(), a.end());

    for (int i = 0; i < n; ++i) {
        if ( i > 0 && i != n-1) {
            if (a[i].second <= a[i-1].second && a[i].second <= a[i+1].second) {
                pos = a[i].first;
            }
        }
    }
    cout << ( pos != 0 ? pos : -1 );
    return 0;
}