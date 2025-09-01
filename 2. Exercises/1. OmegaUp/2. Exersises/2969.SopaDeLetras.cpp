#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string reverse_temporal(const string &s) {
    string t=s;
    reverse(t.begin(), t.end());
    return t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, p; cin >> h >> p;

    vector<string> arr(h);
    for (int i=0; i<h; ++i) cin >> arr[i];

    int n; cin >> n;

    while (n--) {
        string nm; cin >> nm;
        bool band = false;
        
        for (string &e: arr) {
            if (
                e.find(nm) != string::npos || 
                e.find(reverse_temporal(nm)) != string::npos
            ) {
                band = true;
                break;
            }
        }

        if (!band) {
            for (int i=0; i<p; ++i) {
                string text="";

                for (int j=0; j<h; ++j) text += arr[j][i];

                if (
                    text.find(nm) != string::npos || 
                    text.find(reverse_temporal(nm)) != string::npos
                ) {
                    band = true;
                    break;
                }
            }
        }

        if (band) cout<<"si";
        else cout << "no";

        if (n>0) cout<<'\n';
    }

    return 0;
}