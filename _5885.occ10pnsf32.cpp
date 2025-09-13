#include <iostream>

using namespace std;

int esDivisible(int n) {
  if (n%2 == 0) return 2;
  else if (n%3==0) return 3;
  else if (n%5==0) return 5; 
  return -1;
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int a,b; cin>>a>>b;

  while (esDivisible(a) == esDivisible(b)){
    a /= esDivisible(a);
    b /= esDivisible(b);
  }

  cout << a << ' ' << b;
  
  return 0;
}
