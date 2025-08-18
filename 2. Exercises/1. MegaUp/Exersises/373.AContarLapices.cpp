#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, r=0; cin>>n>>k;

    for (int i=0; i<n; ++i) { 
        int a;
        if (cin>>a && a==k) ++r;
    }
    
    cout << r;

    return 0;
}