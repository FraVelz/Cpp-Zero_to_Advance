#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; cin>>n>>m;

    int p=0;
    while (n--) {
        int a; cin>>a;
        
        if (p+a>m) cout<<"espera";

        else {
            cout<<"pasa";
            p+=a;
        }

        if (n>0) cout<<'\n';
        
    }

    return 0;
}