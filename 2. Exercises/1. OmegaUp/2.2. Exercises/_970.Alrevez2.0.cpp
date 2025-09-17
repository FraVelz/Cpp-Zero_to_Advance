#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b; cin>>a>>b;
    cin.ignore();

    string text; getline(cin, text);

    if (a==0 && b-1 == text.length()) {
        reverse(text.begin(), text.end());
        cout<<text;
        return 0;
    }

    string new_="";

    newtext.substr(a,b);

    for (int i=1; i<text.length(); ++i) {
        if (a)
    }

    return 0;
}