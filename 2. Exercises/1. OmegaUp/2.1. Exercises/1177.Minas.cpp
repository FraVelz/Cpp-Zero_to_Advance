#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int h,b; cin>>h>>b;

    vector<string> v(h);

    for (int i=0; i<h; ++i) cin >> v[i];

    int corx=0, cory=0;

    for (int i=0; i<h; ++i) {
        ++cory;
        for (const char& c: v[i]) {
            ++corx;

            if (c=='*') cout<<cory<<' '<<corx<<'\n';
        }

        corx=0;
    }

    return 0;
}
