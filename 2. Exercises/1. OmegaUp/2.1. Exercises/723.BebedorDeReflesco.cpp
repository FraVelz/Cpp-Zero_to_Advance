#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int e, f, c; cin>>e>>f>>c;

    int vacias = e+f;
    int total = 0; 

    while (vacias >= c) {
        int nueva = vacias / c;
        total+= nueva;
        vacias = nueva + (vacias % c);
    }

    cout<<total;

    return 0;
}