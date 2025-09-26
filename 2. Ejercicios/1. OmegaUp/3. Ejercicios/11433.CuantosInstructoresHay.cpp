#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string text; getline(cin, text);
    int counter=0;

    if (!text.empty()) ++counter;

    for (char c : text) {
        if (c==' ') ++counter;
    }
    
    cout << counter;

    return 0;
}