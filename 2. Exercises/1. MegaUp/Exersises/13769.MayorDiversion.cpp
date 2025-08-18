#include <iostream>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    multiset<int> a;

    while (n--) {
        int j; cin>>j;
        a.emplace(j);
    }

    int res=0;
    
    for (int c : a) res+=c; 
    res-= *a.begin();

    cout<<res;

    return 0;
}