#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    if (n%4==0 && n%100!=0) cout << "BISIESTO";
    else if (n%400==0) cout<<"BISIESTO";
    else cout<<"NO BISIESTO";

    return 0;
}
