#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int m; cin>>m;
    vector<int> arr(m);

    bool band=true;
    for (int i=0; i<m; ++i) cin>>arr[i];

    for (int i=0, j=arr.size()-1; i<=(arr.size()-1)/2; ++i, --j) {
        if (arr[i] != arr[j]) {
            band=false; 
            break;
        }
    }

    cout << (band ? "SI" : "NO"); 

    return 0;
}