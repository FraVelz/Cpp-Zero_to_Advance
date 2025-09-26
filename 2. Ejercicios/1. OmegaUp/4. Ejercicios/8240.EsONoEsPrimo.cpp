#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a; cin>>a;

    if (a<2) {
        cout<<"NO";
        return 0;
    }

    bool band=true;

    for (int i=2; i<a; ++i) {
        if (a%i == 0) {
            band=false;
            break;
        }
    }

    cout<< (band ? "SI" : "NO");

    return 0;
}