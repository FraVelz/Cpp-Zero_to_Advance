#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; getline(cin,s);

    int pos, r=0;
    pos = s.find("CodingRush2014");

    while (pos != string::npos) {
        r++;
        pos = s.find("CodingRush2014", pos+14);

    }
    cout<<r;
    

    return 0;
}