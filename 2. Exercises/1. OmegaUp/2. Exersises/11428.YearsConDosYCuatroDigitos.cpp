#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; 

    while (cin >> s) {
        string tmp="", res=""; 

        int n=0;
        for (auto &c: s) {
            if (n < 2) {
                res += c;
                if (c=='/') ++n;

            } else {
                tmp += c;
            }
        }

        int year = stoi(tmp);
        
        if (year >= 74) year += 1900;
        else year += 2000;

        cout<<res<<year<<'\n';
    }

    return 0;
}
