#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    int lines=0, chars=1, num=0;

    while (lines < n) {

        for (int i=0; i <= lines; ++i) {
            cout << ++num;
            if (i<lines) cout<<' ';
        }
        
        if (lines < n) cout<<'\n';
        ++lines;
    }

    return 0;
}