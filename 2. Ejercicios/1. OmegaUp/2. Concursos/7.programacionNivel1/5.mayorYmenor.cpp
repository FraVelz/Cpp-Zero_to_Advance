#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    array<int, 5> arr;
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];

    cout << *max_element(arr.begin(), arr.end()) << ' ';
    cout << *min_element(arr.begin(), arr.end());

    return 0;
}
