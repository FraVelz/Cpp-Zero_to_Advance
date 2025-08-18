#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    int lenght = 2*(n-1) + 1;
    int l = lenght;
    int aterisco=1;

    for (int i=0; i < n; ++i) {
        for (int k=0; k < (lenght-aterisco)/2; ++k) cout<<' ';
        for (int k=0; k<aterisco; ++k)  cout<<'*';

        aterisco+=2;
        cout<<'\n';
    }

    return 0;
}