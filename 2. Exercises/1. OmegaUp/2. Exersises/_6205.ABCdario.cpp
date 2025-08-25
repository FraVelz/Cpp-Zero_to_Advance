#include <iostream>
#include <bitset>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    string abc = "abcdefghijklmnopqrstuvwxyz";

    while (n--) {
        string a; cin>>a;

        bitset<26> band;

        for (char e: a) {
            if (e>='a' && e<='z') band.set(e - 'a');
        }

        if (band.all()) cout<<"PERFECT";
        else cout<<"NO WAY";

        if (n>0) cout<<'\n';
    }

    return 0;
}