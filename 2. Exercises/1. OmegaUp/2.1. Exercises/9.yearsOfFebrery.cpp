#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a1, a2, a3, a4; cin >> a1 >> a2 >> a3 >> a4;

    if (a1 % 4 == 0) {
        if (a1 % 100 == 0) {
            if (a1 % 400 == 0){ cout << 29 << '\n'; }
            else cout << 28 << ' ';
        }
        else { cout << 29 << ' '; }
        
    }
    else {cout << 28 << ' ';}

    
    if (a2 % 4 == 0) {
        if (a2 % 100 == 0) {
            if (a2 % 400 == 0){ cout << 29 << '\n'; }
            else cout << 28 << ' ';
        }
        else { cout << 29 << ' '; }
        
    }
    else {cout << 28 << ' ';}
    
    if (a3 % 4 == 0) {
        if (a3 % 100 == 0) {
            if (a3 % 400 == 0){ cout << 29 << '\n'; }
            else cout << 28 << ' ';
        }
        else { cout << 29 << ' '; }
        
    }
    else {cout << 28 << ' ';}
    
    
    if (a4 % 4 == 0) {
        if (a4 % 100 == 0) {
            if (a4 % 400 == 0){ cout << 29 << '\n'; }
            else cout << 28 << ' ';
        }
        else { cout << 29 << ' '; }
        
    }
    else {cout << 28 << ' ';}
    
    return 0;
}