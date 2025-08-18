#include <iostream>

using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int a,b,c,d,e; cin>>a>>b>>c>>d>>e;

  if ((a+b+c) > (d+e)) cout<<"Juan";
  else cout<<"Pedro";

  return 0;
}