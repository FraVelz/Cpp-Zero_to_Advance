#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int ciclos;
    cin >> ciclos;

    while (--ciclos) {
        
        string palabra; cin >> palabra;
        string old_palabra = palabra;
        
        reverse(palabra.begin(), palabra.end());

        cout << ( palabra == old_palabra ? "P" : "NP" ) << '\n';
    }

    return 0;
}