#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    bool band=false;
    string s, res=""; cin>>s;

    res += s[0];

    for (char e: s) {
        if (e == '-') {
            band=true;

        } else if (band) {
            res+= e;
            band=false;
        } 
    }

    cout<<res;

    return 0;
}