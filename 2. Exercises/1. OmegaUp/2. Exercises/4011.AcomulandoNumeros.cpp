#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int t;
  cin >> t;
  vector<int> arr(t);

  for (int i=0; i<t; ++i) cin>>arr[i];

  for (int i=t-1; i>=0; --i) {
    cout<<arr[i];
    if (i!=0) cout<<'\n';
  }

  return 0;
}