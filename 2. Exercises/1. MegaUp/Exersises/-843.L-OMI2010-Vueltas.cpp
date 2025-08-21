#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void giroHorizontal(vector<vector<int>> &arr) {
    vector<int> line;

    for (int i=0; i<arr.size()-1; ++i) {
        line = arr[i];
        reverse(line.begin(), line.end());
    }
}

void giroVertical(vector<vector<int>> &arr) {

}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int a,b;
  cin >> a>>b;

  vector<vector<int>> arr(a, vector<int>(b));

  for (int i=0; i<a; ++i) {
    for (int j=0; j<b; ++j) cin>>arr[i][j];
  }

  int k; cin>>k;

  for (int i=0; i<k; ++i) {
    int a; cin>>a; 
    if (a=='V') giroVertical(arr);
    else giroHorizontal(arr);
  }

  
  for (int i=0; i<a; ++i) {
    for (int j=0; i<b; ++i) {
        cout<<arr[i][j];
        if (j<b-1) cout<<' ';
    }
    if (i<a-1) cout<<'\n';
  }

  return 0;
}