#include <iostream>

using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int t, x=0;
  cin >> t;
  int m=t;

  while (t--) {
    int a; cin>>a;
    if (a == 0) x++;
  }
  
  cout<<"Mary won "<<x<<" times and John won "<< (m-x)<<" times";

  return 0;
}