#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string txt;
    getline(cin, txt);

    int s=0, res=0;
    int pos = txt.find('h');

    for (char c : txt) {
        if (c==' ' || c==',' || c=='.') {
            ++s;

        } else if (s >= 1 &&( c=='H' || c=='h' )) {
            ++res; s=0;

        } else s=0;

    }

    cout<<(pos == 0 ? res+1 : res)<<" haches";

    return 0;
}