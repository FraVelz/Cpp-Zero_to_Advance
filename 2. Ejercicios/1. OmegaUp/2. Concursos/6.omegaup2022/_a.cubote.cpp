#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>

using namespace std;

inline int sumar(array<int,6> a) {
    return accumulate(a.begin(), a.end(), 0);
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    array<int, 6> arr; 

    for (int i=0; i<6; ++i) cin>>arr[i];
    sort(arr.begin(), arr.end());

    if (n==1) {
        cout << sumar(arr) - *min_element(arr.begin(), arr.end());
        return 0;
    }


    int res=0;
    for (int i=0; i<5; ++i) {
        res += arr[i];
    }

    cout<<res;

    return 0;
}
