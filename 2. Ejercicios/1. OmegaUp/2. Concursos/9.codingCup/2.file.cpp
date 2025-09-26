#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    vector<int> v(n);
    for (int i=0; i<n; ++i) cin >> v[i];

    int mxe; cin>>mxe;
    bool band=true;

    int tmp=v[0]; 

    for (int i=0; i<n; ++i) {
    }

    cout << (band ? "Seguro":"Inseguro");
    return 0;
}
