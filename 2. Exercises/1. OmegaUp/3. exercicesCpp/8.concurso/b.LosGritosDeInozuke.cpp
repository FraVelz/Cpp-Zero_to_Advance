#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    string msg="A";

    for (int i=0; i<n; ++i) {
        msg+='H';
        cout << msg << '\n';
    } 

    return 0;
}
