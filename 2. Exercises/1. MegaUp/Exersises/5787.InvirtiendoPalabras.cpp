#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string a, word; cin>>a;
  string res="";

  int cont=0;
  for (char e : a) if (e==',')++cont;

  char e;
  for (int i=0; i<a.size(); ++i) {
    e=a[i];

    if (e==',') {
      reverse(word.begin(), word.end());
      res+=word+e;
      word="";
    
    } else {
      word+=e;
    }
  }

  reverse(word.begin(), word.end());
  res+=word;
  word="";
    
  cout << res;
  return 0;
}