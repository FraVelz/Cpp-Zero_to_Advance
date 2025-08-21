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
        for (int j=n-1; j>i; --j) {
            if (arr[i] > arr[j]) ++res;
        }
    }
    
    cout<<res;

    return 0;
}