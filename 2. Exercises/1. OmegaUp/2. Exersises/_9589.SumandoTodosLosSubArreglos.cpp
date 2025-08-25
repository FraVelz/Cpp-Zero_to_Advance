#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k; cin>>n>>k;

    vector<int> arr(n);

    for (int i=0; i<n; ++i) cin>>arr[i];

    for (int i=0; i<k; ++i) {
        int sum=0;

        for (int j=i+1; j<k; ++j) {
            sum+= arr[j];
        }

        cout<<sum;
        if (i<n-1) cout<<' ';
    }

    return 0;
}