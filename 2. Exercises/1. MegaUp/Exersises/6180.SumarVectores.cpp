#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int t;
  cin >> t;
  int size = t*t;

  vector<int> arr1(size);
  vector<int> arr2(size);
  vector<int> res(size);

  for (int i=0; i<size; ++i) cin>>arr1[i];
  for (int i=0; i<size; ++i) cin>>arr2[i];


  for (int i=0; i<size; ++i) res[i] = arr1[i]+arr2[i];

  for (int i=0; i<size; ++i) {
    cout<< res[i];

    if ( (i+1) % t == 0 && i<size-1) cout<<'\n';

    else if (i < size-1) cout<<' ';
  }

  return 0;
}