#include <iostream>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    set<char> s;

    while (n--) {
        string a; cin >>a;
        s.emplace(a[0]);
    }
    cout<<s.size();

    return 0;
}