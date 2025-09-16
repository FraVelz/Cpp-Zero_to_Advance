#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;

    for (int i=0; i<n; ++i) {
        int a,b,c; cin>>a>>b;

        if (a==1) cout<<(b<0 ? -b: b);

        else if (a==2) {
            cin>>c;
            cout<<(c>b ? c : b);
        }

        else if (a==3) {
            cin>>c;
            cout<<(c<b ? c : b);
        }
        
        else if (a==4) {
            cout<<fixed<<setprecision(2)<<sqrt(b);
        }

        else if (a==5) {
            cin>>c;
            cout<<(long long)pow(b, c);
        }
        
        if (i<n-1) cout<<'\n';
    }


    return 0;
}