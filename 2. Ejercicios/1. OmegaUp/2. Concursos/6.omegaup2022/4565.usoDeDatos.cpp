#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x, res=0; cin>>n>>x;
    res = n*x + n;

    for (int i=0; i<x; ++i) {
        int a; cin>>a;
        res -= a;
    }

    cout<<res;

    return 0;
}
