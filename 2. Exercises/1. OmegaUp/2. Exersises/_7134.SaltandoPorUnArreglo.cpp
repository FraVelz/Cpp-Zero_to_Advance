#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cont=0, ind=0; cin >> n;

    vector<int> arr(n); 
    for (int i=0; i<n; ++i) cin>>arr[i];

    for (int i=0; i<n; ++i) {
        ind += arr[ind];

        // if (arr[ind] < 0) {
       //     ind -= arr[ind];

       // } else {
       //     ind += arr[ind];
        // }

        ++cont;
    }

    cout<<cont;

    return 0;
}