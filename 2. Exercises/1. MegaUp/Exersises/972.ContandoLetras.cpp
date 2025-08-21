#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int i, f; cin>>i>>f;
    cin.ignore();

    string t;
    getline (cin, t);

    for(char x='a'; x<='z'; ++x) {
        int a=0;
        for (int c=i; c<=f; ++c) {
            if (x ==t[c])++a;
        }
        cout<<x<<'='<<a;

        if (x<'z') cout<<'\n';
    }
    return 0;
}