#include <iostream>
#include <vector>

using namespace std;

inline int abs_(int x) { return x < 0 ? -x : x; }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> n(100);
    int res=0;

    for (int i=0; i<100; ++i) {
        int a;

        if (cin>>a) res+=abs_(a);
        else break;
    }
    
    cout << res;

    return 0;
}