#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b, c; cin>>a>>b>>c;
    long long res=0;

    for (int i=a; i<=b; ++i) {
        res += pow(i, c);
    }

    cout<<res;

    return 0;
}