#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    vector<int> arr(n);

    for (int i=0; i< n; ++i) cin >> arr[i];

    for (int i=arr.size()-1; i >= 0; --i) {
        cout<<(arr[i]*arr[i])<<'\n';
    }

    return 0;
}