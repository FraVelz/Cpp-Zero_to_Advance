#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a,b;cin>>a>>b;
    
    if (a>b) cout<<"mayor";
    else if (a<b) cout<<"menor";
    else cout<<"iguales";

    return 0;
}