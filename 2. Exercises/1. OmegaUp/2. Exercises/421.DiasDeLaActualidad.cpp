#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a; 
    
    
    while (getline(cin, a)) {
        for(char &e: a) if (e==' ') e = '_';
        cout<<a;
    }

    return 0;
}