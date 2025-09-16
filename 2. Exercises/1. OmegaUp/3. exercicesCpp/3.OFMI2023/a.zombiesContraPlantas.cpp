#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, d, esc=0; cin>>n>>d;

    for (int i=0; i<n; ++i) {
        int z; cin>>z;

        while (z > 0) {
            z -= d;
if (z > 0) ++esc;
        }
    }

    cout << esc;

    return 0;
}
