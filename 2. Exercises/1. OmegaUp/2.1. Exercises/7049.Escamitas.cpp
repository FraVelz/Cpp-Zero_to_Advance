#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    if (n < 21) cout << "fria!\n";
    else if (n <= 29) cout << "tibia\n";
    else cout << "caliente!\n";

    if (n < 15 || n > 34) cout << "RIP escamitas :(";

    return 0;
}
