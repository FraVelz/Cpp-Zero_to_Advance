#include <iostream>

using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
	
  int a,b; cin>>a>>b;
  
  if (a>b) cout<< (24-a)+b;
  else if (a==b) cout<<24;
  else cout<< (b-a);

  return 0;
}