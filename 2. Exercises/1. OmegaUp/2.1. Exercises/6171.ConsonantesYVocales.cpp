#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s; 
    int c=0, v=0;

    for (char e: s) {
        if (e=='A' || e=='E' || e=='I' || e=='O' || e=='U') ++v;
        else if (e >= 'A' && e <= 'Z') ++c;
    }
    
    cout << c << ' ' << v;

    return 0;
}