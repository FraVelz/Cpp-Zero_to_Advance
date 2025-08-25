#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b; cin>>a>>b;

    if (a>=b || a<0 || b<0) {
        cout<<"Error";

    } else {
        for (int i=a+1; i<b; i+=2) {
            cout<<i;
            if (i<b-1) cout<<' ';
        }
    }

    return 0;
}