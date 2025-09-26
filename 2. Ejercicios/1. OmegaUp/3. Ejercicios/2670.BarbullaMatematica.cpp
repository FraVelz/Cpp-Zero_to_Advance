#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,res=0; cin>>n;

    for (int i=1; i<=n; ++i) {
        res+= (i *(i+1)) / 2;
    }

    cout<<res;

    return 0;
}