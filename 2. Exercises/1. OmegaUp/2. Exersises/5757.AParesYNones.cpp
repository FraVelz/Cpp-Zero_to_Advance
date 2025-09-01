#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, r=0, s1=0, s2=0; cin >> n;

    for (int i=0; i<n; ++i) {
        int a; cin >> a;

        if (a & 1) {
            s1 += a;
            r++;

        } else {
            s2 += a;
        }
    }


    if ( (s1/r) == (s2/(n-r)) ) cout<<"EMPATE!";
    else if ( (s1/r) > (s2/(n-r)) ) cout<<"NONILA";
    else cout<<"APARICIO";

    return 0;
}