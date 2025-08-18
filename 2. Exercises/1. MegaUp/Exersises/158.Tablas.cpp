#include <iostream>

using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int t;
  cin >> t;
  
  while (t--) {
    int a; cin>>a;
    for (int i=1; i<=10; ++i) {
      cout<<a<<'x'<<i<<'='<<i*a<<'\n';
    }
    if (t > 0) cout<<'\n';
  }

  return 0;
}