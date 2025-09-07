#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    array<int, 3> arr;

    for (int i=0; i<3; ++i) cin >> arr[i];
    sort(arr.begin(), arr.end());

    if (arr[0]*arr[0] + arr[1]*arr[1] == arr[2]*arr[2]) {
        cout << "Si";

    } else cout << "No";

    return 0;
}