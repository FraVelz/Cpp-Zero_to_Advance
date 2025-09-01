#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    int res=0;
    
    for (char e: s) res += e - '0';
    cout << res;

    return 0;
}