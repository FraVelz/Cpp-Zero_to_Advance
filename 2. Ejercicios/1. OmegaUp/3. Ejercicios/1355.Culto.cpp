#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, corr=0, incorr=0; cin>>n;

    for (int i=0; i<n; ++i) {
        int a,b; cin>>a>>b;
        corr+=a;
        incorr+=b;
    }

    if (corr==incorr) cout<<"INDETERMINADO";
    else if (corr>incorr) cout<<"CULTO";
    else cout<<"INCULTO";

    return 0;
}