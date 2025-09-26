#include <iostream>

using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n; cin>>n;

  if (n%2 != 0) {
    cout<<0;
    return 0;
  }

  int s1=0, s2=0;

  for (int i=0; i<n; ++i) {
    int a; cin>>a;

    if (i+1 <= (n/2)) s1+=a;
    else s2 += a;
  }

  if (s1==s2) cout<<s1<<' '<<1;
  else cout<<(s1+s2)<<' '<< 0;

  return 0;
}