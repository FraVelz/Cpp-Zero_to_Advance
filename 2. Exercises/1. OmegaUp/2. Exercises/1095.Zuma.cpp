#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c,r=1; cin >>a>>b;
    c = a-b;

    while (c>1) {
        b = a;
        a = c;
        c = a-b;
        cout<<a<<' '<<b<<' '<<c<<'\n';
        ++r;
    }

    cout << "Hola mundo!";

    return 0;
}