#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  
  long long a;
  int t,r;
  cin>>a>>t;

  while (t--) {
    int b;cin>>b;
    r+=b;
  }

  cout<< (a-r);
  return 0;
}
//https://omegaup.com/arena/problem/Deuda/#problems

