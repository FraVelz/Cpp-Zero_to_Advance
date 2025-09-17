#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> words(vector<string> &v, const string &s) {
    string n = "";

    for (const char &e: s) {
        if (e == ' ') {
            v.push_back(n);
            n = "";

        } else n += e;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; 
    
    while (getline(cin, s)) {

        int space = 0;
        for (const char &e: s) if (e == ' ') ++space;

        if (space >= 1 && space <= 3) {
            vector<string> v(space+1);
            words(v, s);

            if (space+1 == 2) cout<<v[1]<<' '<<v[0];
            if (space+1 == 3) cout<<v[1]<<' '<<v[2]<<' '<<v[0];
            if (space+1 == 4) cout<<v[2]<<' '<<v[3]<<' '<<v[0]<<v[1];

        } else cout << '*';
        
        cout << '\n';
    }

    return 0;
}