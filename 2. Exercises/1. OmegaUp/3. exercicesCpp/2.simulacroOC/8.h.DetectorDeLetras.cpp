#include <iostream>
#include <cctype>

using namespace std;

bool vocalMayuscula(char &c) {
    if (c=='A' || c=='E' || c=='I' || c=='O' || c=='U') return true;
    return false;
}

bool semivocalMayuscula(char &c) { return c == 'Y' ? true : false; }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char c;
    int i = 0;

    while (cin >> c) {
        if (i==10) break;
        else if (islower(c) || !isalpha(c)) continue;

        if (vocalMayuscula(c)) cout<<'V';
        else if (semivocalMayuscula(c)) cout<<'S';
        else cout<<'C';

        cout << ' ';
        ++i;
    }

    return 0;
}

