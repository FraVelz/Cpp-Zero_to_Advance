#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    char c; 

    cin>>n>>c;

    if (n>=18 && c=='M') cout<<"VERDADERO";
    else cout<<"FALSO";

    return 0;
}
