#include <iostream>

using namespace std;

inline void comparations(bool a) {
    if (a) cout<<"True";
    else cout<<"False";
}

inline void asa() {cout<<' ';}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c; cin >> a >> b >> c;

    comparations(a < b);  asa();
    comparations(c > a);  asa();
    comparations(a == b); asa();
    comparations(a != c); asa();
    comparations(c <= b);
    

    return 0;
}