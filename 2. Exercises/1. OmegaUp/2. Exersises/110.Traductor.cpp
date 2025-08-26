#include <iostream>

using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, a,b,c; cin >> s;

    int pos1 = s.find('?');
    int pos2 = s.find(':');

    a = s.substr(0, pos1);
    b = s.substr(pos1+1, pos2-pos1-1);
    c = s.substr(pos2+1);

    cout<< "if("<<a<<")\n";
    cout<< "     "<<b<<";\n"; 
    cout<< "else\n";
    cout<< "     "<<c<<";\n";

    return 0;
}