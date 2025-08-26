#include <iostream>
#include <cctype>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; 
    getline(cin,s);

    transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout<<s;

    return 0;
}