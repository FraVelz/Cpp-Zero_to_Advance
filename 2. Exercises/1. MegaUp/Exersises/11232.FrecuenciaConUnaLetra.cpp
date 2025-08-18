#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string palabra; char c;

    cin >> palabra >> c;

    int i = 0;

    for (char ch : palabra) {
        if (ch == c) ++i;
    }
    
    cout << i; 

    return 0;
}