#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> arr(n);

    for (int i=0; i<n; ++i) cin >>arr[i];

    int a,b, men=INT_MAX, pos=-1; cin>>a>>b;

    for (int i=a; i<=b; ++i) {
        if (arr[i] < men) {
            pos = i;
            men = arr[i];
        }
    }

    cout<<pos;

    return 0;
}