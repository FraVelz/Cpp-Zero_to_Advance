#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin>>a;
    b=a;

    reverse(b.begin(), b.end());

    cout << (a==b ? "SI" : "NO");

    return 0;
}