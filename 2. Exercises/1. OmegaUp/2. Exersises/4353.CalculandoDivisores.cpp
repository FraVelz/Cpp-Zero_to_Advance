#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    int temp=n;

    while (temp--) {
        if (n%(temp+1) == 0) cout<<(temp+1)<<'\n';

        if (temp==1) break;
    }

    if (n!=1) cout<<1;

    return 0;
}