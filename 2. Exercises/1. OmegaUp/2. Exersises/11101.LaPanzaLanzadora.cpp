#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector<int> v(n);
    for (int i=0; i<n; ++i) cin >> v[i];
    
    cout << *min_element(v.begin(), v.end()) << ' ';
    cout << *max_element(v.begin(), v.end());

    return 0;
}