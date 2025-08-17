#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a = {5,3,7,1,8,29,2,89,2,63,6,23,12};
    int n = a.size()-1;

    for (int i=0; i<n; ++i) {
        for (int j=0; j<n-i; ++j) {
            if (a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
            }
        }
    }

    for (int i=0; i<a.size(); ++i) cout<<i<<' ';
    
    return 0;
}
