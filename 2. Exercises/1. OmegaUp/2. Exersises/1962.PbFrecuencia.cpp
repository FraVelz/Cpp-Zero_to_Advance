#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int f, n; cin >> f >> n;
    vector<int> v(n); 
    
    for (int i=0; i < n; ++i) cin >> v[i];
    
    for (int i = 1; i <= f; ++i) {
        int c = 0; 
        for (int e: v) if (e == i) ++c;

        cout << i << '-' << c;

        if (i < f) cout<<'\n';
    }    

    return 0;
}