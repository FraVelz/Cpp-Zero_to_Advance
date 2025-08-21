#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string text;
    getline(cin, text);

    reverse(text.begin(), text.end());

    cout << text;

    return 0;
}