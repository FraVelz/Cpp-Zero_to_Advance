#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int z, y; cin >> z >> y; 

    for (int x = z; x <= y; x++) {
        cout << x << ' ';
    }

    return 0;
}
