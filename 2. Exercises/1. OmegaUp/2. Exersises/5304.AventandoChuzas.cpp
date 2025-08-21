#include <iostream>
#include <algorithm>
#include <numeric>
#include <array>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    array<int, 7> arr;
    for (int i=0; i<7; ++i) cin>>arr[i];

    cout<< (accumulate(arr.begin(), arr.end(), 0) / 7) << '\n';
    cout<< *max_element(arr.begin(), arr.end());

    return 0;
}