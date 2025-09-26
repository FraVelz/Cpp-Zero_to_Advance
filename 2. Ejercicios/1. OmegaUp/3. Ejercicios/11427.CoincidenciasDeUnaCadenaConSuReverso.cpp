#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main () {
    string text;
    cin >> text;
    
    transform(
        text.begin(), text.end(), text.begin(), 
        [](unsigned char c) { return tolower(c); } 
    );

    string reverse_text = text;

    reverse(reverse_text.begin(), reverse_text.end());

    int counter = 0;

    for (int i = 0; i < text.size(); ++i) {
        if (text[i] == reverse_text[i]) ++counter;
    }

    cout << counter;

    return 0;
}