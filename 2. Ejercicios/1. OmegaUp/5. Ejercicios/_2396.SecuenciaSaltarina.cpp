#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    if (n==2) {
        cout << 0; 
        return 0;
    }

    int tmp; cin>>tmp;
    int band = 1;

    for (int i=0; i<n-1; ++i) {
        int a; cin>>a;

        int r = abs(tmp-a);
        tmp = a; 

        if (r==band && band > 0) ++band;
        else if (band>0) band=-band;
    }

    if (band>0) cout << 0;
    else cout << -band;

    return 0;
}
