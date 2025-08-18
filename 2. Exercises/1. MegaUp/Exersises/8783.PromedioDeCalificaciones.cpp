#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int a,b,c,d,e,f,g;
  cin >> a>>b>>c>>d>>e>>f>>g;
  cout<< fixed<< setprecision(1)<<((a+b+c+d+e+f+g)/7.0);

  return 0;
}