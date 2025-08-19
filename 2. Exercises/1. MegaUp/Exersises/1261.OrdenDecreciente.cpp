#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int t;
  cin >> t;
  vector<int> arr(t);
  bool band=true;

  for (int i=0; i<t; ++i) cin>>arr[i];

  for (int i=0; i<t-1; ++i) {
    if (arr[i] > arr[i+1]) band=false;
  }
  
  cout<<(band ? "SI" : "NO");

  return 0;
}