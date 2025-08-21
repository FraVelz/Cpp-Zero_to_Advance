#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    vector<int> arr(n);
    
    for (int i=0; i<n; ++i) cin>>arr[i];

    bool creciente=true, decreciente=true;

    for (int j=0; j<n-1; ++j) {
        if (arr[j] <= arr[j+1] && creciente) {
            decreciente=false;

        } else if (arr[j] >= arr[j+1]) {
            creciente=false;
        }
    }

    if (creciente) cout<<"CRECIENTE";
    else if (decreciente) cout<<"DECRECIENTE";
    else cout<<"NO ORDENADA";

    return 0;
}