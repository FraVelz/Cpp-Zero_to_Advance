#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    vector<int> v(n);
    for (int i=0; i<n; ++i) cin >> v[i];

    for (int i=0; i<n; ++i) {
        cout << "Poscicion: "<<i<<" tiene valor de: "<<v[i]<<"\n";
    }

    cout << "FIN";

    return 0;
}
