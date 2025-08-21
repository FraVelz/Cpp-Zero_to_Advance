#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    while (n--) {
        int x1, y1, x2, y2; cin >>x1>>y1>>x2>>y2;
        int x = x1+x2, y = y1+y2;
        
        for ( char c='A'; c<='E'; ++c) {
            int a, b; cin>>a>>b;
            if (a=x && b==y) cout<<c;
        }

        // int a1, a2, b1, b2, c1, c2, d1, d2;
        // cin>>a1>>a2>>b1>>b2>>c1>>c2>>d1>>d2;
        

        // if ( a1==x && a2==y ) cout<<'A';
        // else if ( b1==x && b2==y ) cout<<'B';
        // else if ( c1==x && c2==y ) cout<<'C';
        // else if ( d1==x && d2==y ) cout<<'D';
    }

    return 0;
}