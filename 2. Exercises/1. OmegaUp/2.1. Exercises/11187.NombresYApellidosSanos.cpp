#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

/*
void words(vector<string> &v, const string &s) {
    string n = "";

    for (const char &e: s) {
        if ( e == ' ' && (!n.empty()) ) {
            v.push_back(n);
            n.clear();

        } else n += e;
    }
    if (!n.empty()) v.push_back(n);
}*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; 

    while (getline(cin, s)) {
        istringstream iss(s);
        vector<string> v;
        string w;

        while (iss >> w) v.push_back(w);

        int n = v.size();

        if (n < 1 || n > 3) cout<<'*';
        else if (n == 2) cout<<v[1]<<' '<<v[0];
        else if (n == 3) cout<<v[2]<<' '<<v[0]<<' '<<v[1];
        else if (n == 4) cout<<v[2]<<' '<<v[3]<<' '<<v[0]<<' '<<v[1];
    }
    
    /*
    while (getline(cin, s)) {

        int space = 0;
        for (const char &e: s) if (e == ' ') ++space;

        if (space >= 1 && space <= 3) {
            vector<string> v;
            words(v, s);

            if (space+1 == 2) cout<<v[1]<<' '<<v[0];
            if (space+1 == 3) cout<<v[2]<<' '<<v[0]<<' '<<v[1];
            if (space+1 == 4) cout<<v[2]<<' '<<v[3]<<' '<<v[0]<<' '<<v[1];

        } else cout << '*';
        
        cout << '\n';
    }*/

    return 0;
}
