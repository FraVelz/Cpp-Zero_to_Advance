#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a=-1, b=-2;
    bool band=true;

    while (band) {
        cin>>a>>b;

        band = !(
            (a == b) || (a&1 && !(b&1)) || (b&1 && !(a&1)) || 
            (a>1000 && b>1000) 
        );

        if (band) cout<<"TODAVIA NO\n";
    }
    
    cout<<"YA";

    return 0;
}