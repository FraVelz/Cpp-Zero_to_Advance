#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;cin>>a;
    
    if (a>=18) cout<<"Es Mayor";
    else cout<<"Es Menor";

    return 0;
}