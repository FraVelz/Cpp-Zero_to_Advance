#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c, x,y,z; cin>>x>>y>>z;

    string t; cin>>t;

    if (x<y && x<z){
        a = x;
        b = (y < z)?y : z;
        c = (b == z) ? y : z;       

    } else if (y < z && y < x) {
        a = y;
        b = (x < z)?x : z;
        c = (b == z) ? x : z;       

    } else {
        a = z;
        b = (y < x)?y : x;
        c = (b == x) ? y : x;       
    }

    int cont=0;
    for (char e : t) {
        cont++;
        if (e=='A') cout<<a;
        else if (e=='B') cout<<b;
        else cout<<c;

        if (cont < 3) cout<<' ';
    }

    return 0;
}