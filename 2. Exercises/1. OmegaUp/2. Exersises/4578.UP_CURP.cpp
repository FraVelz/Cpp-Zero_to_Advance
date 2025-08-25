#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string nm, p,ma; cin>>nm>>p>>ma;
    string d,m,a; cin>>d>>m>>a;

    string res="";
    res+=p[0];

    bool found = false;
    for (size_t i = 1; i < p.size(); i++) {
        char f = tolower(p[i]);
        if (f=='a' || f=='e' || f=='i' || f=='o' || f=='u') {
            res.push_back(p[i]);
            found = true;
            break;
        }
    }
    if (!found) res.push_back('X');

    res= res + ma[0] + nm[0];
    
    if (m.size() == 1) m = "0" + m;
    if (d.size() == 1) d = "0" + d;

    res.append(a.substr(2,2));
    res += m + d;
    
    cout<<res;

    return 0;
}