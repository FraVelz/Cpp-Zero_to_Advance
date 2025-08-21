#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  double a,b,c, d,e,f;
  cin >> a>>b>>c>>d>>e>>f;
 
 cout<<fixed<<setprecision(2)<<(b*c + e*f);
  
  return 0;
}