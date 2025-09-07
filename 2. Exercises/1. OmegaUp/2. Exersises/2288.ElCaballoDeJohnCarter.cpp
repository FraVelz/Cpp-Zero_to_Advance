#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a; 
    int p,s,b, r=0;
    
    cin >>p>>s>>b >>a;

    for (char e: a) {
        if (e == '-') r += p;
        else if (e == '/') r += s;
        else r += b;
    }

    cout << r;

    return 0;
}