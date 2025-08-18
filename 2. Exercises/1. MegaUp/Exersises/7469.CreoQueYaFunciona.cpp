#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string text;
    bool isBinary = true;
    cin >> text;

    for (char c : text) {
        if ( (c != '0') && (c != '1') ) {
            isBinary = false;
            break;
        }
    }
    
    if (!isBinary) {
        cout << "10101";

    } else {
        cout << text;
    }

    return 0;
}