#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int a, b;
  cin>>a;
  vector<int> arr(a);

  for (int i=0; i<a; ++i) cin>>arr[i];
  cin>>b;

  bool band=false;
  for (int e : arr) if (e==b) band=true;

  cout<< (band ? "SI" : "NO");   

  return 0;
}