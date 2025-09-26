#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n=0, a,b,c; cin>>a>>b>>c;

    for (int i=1; i<=a; i+=2) n+=i;

    for (int i=1; i<=b; i*=2) n-=i;

    while (n % c == 0) n/=c;

    cout << n;
    return 0;
}