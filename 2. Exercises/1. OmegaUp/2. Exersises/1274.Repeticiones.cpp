#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n; cin>>n;
  vector<int> arr(n);

  for (int i=0; i<n; ++i) cin>>arr[i];
  int res=0;

  for (int e : arr) if (e == arr[0]) ++res;
  cout<<res;

  return 0;
}