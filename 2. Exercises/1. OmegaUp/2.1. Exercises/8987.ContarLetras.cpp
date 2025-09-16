#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string text; getline(cin, text);
    int c=0;

    for (char e : text) if (e == ' ') ++c;

    cout << text.size()-c;

    return 0;
}