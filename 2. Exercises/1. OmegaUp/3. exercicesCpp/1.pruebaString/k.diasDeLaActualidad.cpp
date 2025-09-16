#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a; 

    while (getline(cin, a)) {
        string b="";

        for (char c : a) b += (c == ' ' ? '_' : c);
        cout << b << '\n';
    }

    return 0;
}
