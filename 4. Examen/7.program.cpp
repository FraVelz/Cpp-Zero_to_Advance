#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a; cin>>a;
    map<char, int> reg;

    for (char &c: a) reg[c]++;

    for (char &c: a) {
        if (reg[c] >= 1) {
            cout<<c;
            reg[c] = -1;
        }
    }

    return 0;
}
