#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    set<int, greater<int>> v;

    while (cin >> n) v.emplace(n);

    int i=0;
    for (int c: v) {
        if (i==0) cout<<'[';

        cout<<"'"<<c<<"'";
        if (i<v.size()-1) cout<<", ";

        if (i==v.size()-1) cout<<']';
        ++i;
    }

    return 0;
}
