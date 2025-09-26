#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long d, t, p, c, l; cin>>d>>t>>c>>p>>l;
    bool band=false;

    band=( (d-t) + (p*c) ) >= l;
    
    cout<<(band ? "LIBRO" : "LIMONADA");

    return 0;
}