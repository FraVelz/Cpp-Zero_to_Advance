#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // Get data
    int n, c=0; cin>>n;

    vector<int> a(n);
    
    for (int i=0; i<n; ++i) cin>>a[i];

    map<int, int> freq;
    
    for (int x : a) freq[x]++;

    for (auto x : freq) cout<<x.first<<' '<<x.second<<'\n';

    return 0;
}