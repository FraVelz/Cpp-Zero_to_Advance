#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int num; cin >> num;

    vector<int> lista(num);

    for (int i = 0; i < num; i++) { cin >> lista[i]; }

    for (int x = num-1; x >= 0; x--) {
        cout << lista[x] << ' ';
    }

    return 0;
}