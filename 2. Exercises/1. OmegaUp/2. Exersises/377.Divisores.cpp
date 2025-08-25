#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    while (cin >> n) {
        bool band=false;

        if (n%2 == 0) {
            cout<<2;
            band=true;
        } 
        if (n%3 == 0) {
            if (band) cout<<' ';
            cout<<3;
            band=true;
        }
        if (n%5 == 0) {
            if (band) cout<<' ';
            cout<<5;
            band=true;
        }
        if (n%7 == 0) {
            if (band) cout<<' ';
            cout<<7;
            band=true;
        }
        cout<<'\n';
    }

    return 0;
}