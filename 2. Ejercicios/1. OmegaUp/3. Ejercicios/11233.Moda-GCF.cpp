#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n; cin>>n;

  vector<int> arr(n);
  for (int i=0; i<n; ++i) cin>>arr[i];

  pair<int, int> info;
  
  for (int i=0; i<n; ++i) {
    int cont=0;
    for (int j=0; j<n; ++j) {
      if (arr[j] == arr[i]) ++cont;
    }

    if (info.second<cont) {
      info.first=arr[i];
      info.second=cont;
    }
  }

  cout<<info.first;
  return 0;
}