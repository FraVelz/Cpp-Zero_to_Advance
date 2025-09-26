#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string p;
    int n;

    cin>>p>>n;

    cout << (p.substr(0, n) + p.substr(p.size()-n, n));

    return 0;
}