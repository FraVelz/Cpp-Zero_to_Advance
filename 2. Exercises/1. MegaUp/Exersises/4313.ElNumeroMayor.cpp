#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y; cin>>x>>y;

    cout << (x > y ? x : y);

    return 0;
}