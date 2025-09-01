#include <iostream>
#include <string> 
#include <sstream> 
#include <algorithm> 
#include <cctype> 

using namespace std;

string lwr(const string& s) {
    string n=s;
    transform(n.begin(), n.end(), n.begin(), ::tolower);
    return n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string p,text,token;
    cin>>p>>ws;
    getline(cin, text);

    stringstream sst(text);

    int c=0;
    while (sst >> token) if (lwr(token) == lwr(p)) ++c;

    string veces="veces.";
    if (c==1) veces="vez.";

    cout<<p<<" se repite "<<c<<' '<<veces;

    return 0;
}