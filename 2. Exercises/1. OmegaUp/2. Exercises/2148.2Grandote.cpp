#include <iostream>

using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int a,res=1;
  cin>>a;

  for (int i=0; i<a; ++i) {
    res += 2 << i;
  }

  cout<<res;

  return 0;
}