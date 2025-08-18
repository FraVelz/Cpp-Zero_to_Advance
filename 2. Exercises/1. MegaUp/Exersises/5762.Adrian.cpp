#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, res=0; cin>>n;
    vector<int> arr(n);

    for (int i=0; i<n; ++i) cin>>arr[i];

    for (int i=0; i<n; ++i) {
       if (i%2==0) res+=arr[i]; 
       else res-=arr[i];
    }

    cout << res;

    return 0;
}