#include <iostream>

using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  long long a; cin>>a;
  const long long s=86400;
  cout<<(a*s)<<'\n';

  return 0;
}