#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n; 

    for (int i=1; i<=n; ++i) {
        if (i%3 == 0 && i%7 == 0) cout<<"FLIMFLAM";
        else if (i%3 == 0) cout<<"FLIM";
        else if (i%7 == 0) cout<<"FLAM";
        else cout<<i;

        if (i<n) cout<<'\n';
    }

    return 0;
}