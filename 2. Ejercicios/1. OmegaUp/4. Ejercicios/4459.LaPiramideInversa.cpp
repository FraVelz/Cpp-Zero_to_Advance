#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a; getline(cin, a);

    for (int i = a.size(); i > 0; --i) {
        cout<<string(i-1, ' ');
        cout<<a.substr(i-1);
        cout<<'\n';
    }

    return 0;
}