#include <iostream>
#include <cctype>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a,r=""; cin>>a;
    bool active=false;

    for (char e: a) {
        if (e=='*') {
            if (active) active=false; 
            else active=true;

        } else {
            if (active) r+=toupper(e);
            else r+=e;
        }
    }

    cout<<r;

    return 0;
}