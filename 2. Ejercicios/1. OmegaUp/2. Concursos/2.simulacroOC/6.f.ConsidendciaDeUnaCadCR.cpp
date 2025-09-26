#include <algorithm>
#include <cctype>
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a,b; cin >> a;

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    b = a;

    reverse(a.begin(), a.end());

    int n=0;
    for (int i=0; i<a.length(); ++i) {
        if (a[i] == b[i]) ++n;
    }

    cout << n;

    return 0;
}
