#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a,b,s; cin>>a>>b>>s;

    if (s==0) cout<<"NO";
    else cout << ( (a+b) % s == 0 ? "SI" : "NO");

    return 0;
}