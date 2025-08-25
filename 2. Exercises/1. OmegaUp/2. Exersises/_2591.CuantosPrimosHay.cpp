#include <iostream>

using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, r=0; cin>>n;
  bool band;

  if (n < 1) {
    band=false;

  } else if (n <= 3) {
    band=true;
    r=n-1;

  } else {
    for (int i=2; i<n; ++i) {
        for (int j=2; j<=i; ++j) {
            if ()
        }
    }
  }


  if (band) cout<<r;
  else cout<<"No existen numeros primos en la cantidad ingresada.";

  return 0;
}