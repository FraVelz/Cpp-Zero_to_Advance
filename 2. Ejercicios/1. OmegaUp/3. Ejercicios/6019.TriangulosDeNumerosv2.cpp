#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    int lines=0, chars=1, num=1, register_=1;

    while (lines < n) {

        for (int i=0; i <= lines; ++i) {
            cout<<num--;
            ++register_;
            if (i<lines) cout<<' ';
        }
        num=++register_;
        
        if (lines < n) cout<<'\n';
        ++lines;
    }

    return 0;
}