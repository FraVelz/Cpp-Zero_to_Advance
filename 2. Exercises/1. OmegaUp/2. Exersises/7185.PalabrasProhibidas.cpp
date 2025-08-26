#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a,b;

    getline(cin,a);
    getline(cin,b);

    int pos;

    while (pos != string::npos) {
        pos = a.find(b);

        
        if (pos != string::npos){
            string x(b.size(), ' ');
            a.replace(pos, b.size(), x);
        }
    }

    cout<<a;

    return 0;
}