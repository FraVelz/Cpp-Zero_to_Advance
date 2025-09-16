#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b, r=0; cin>>a>>b;

    int x=a, y=b;
    cout<<x<<' '<<y<<' ';

    while (true) {
        int z = (x + y) % 10;
        cout<<z<<' ';
        r++;

        x=y;
        y=z;

        if (x==a && y==b) break;
    }

    cout<<'\n'<<r;

    return 0;
}