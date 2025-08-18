#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    if (n <= 3) cout<<"BEBE";
    else if (n <= 14) cout<<"NINO";
    else if (n <= 18) cout<<"JOVEN";
    else if (n <= 65) cout<<"ADULTO";
    else cout<<"ADULTO 3RA";

    return 0;
}