#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k; cin>>n>>k;
    vector<int> v(n);


    for (int i=0; i<n; ++i) cin >> v[i];
    reverse(v.begin(), v.end());

    int tmp=0, i;
    
    for (i=0; i<n; ++i) {
        if (tmp < k) tmp += v[i];
        else break;
    }


    cout<<(i-1); // Porque antes del break, +1 innecesario

    return 0;
}
