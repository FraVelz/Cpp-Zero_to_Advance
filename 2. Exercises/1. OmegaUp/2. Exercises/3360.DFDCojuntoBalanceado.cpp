#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a=0,b=0, n; cin>>n;

    while (n--) {
        int x; cin>>x;

        if (x<0)a+=x;
        else b+=x;
    }

    if (a+b == 0) cout<<"BALANCEADO";
    else if (a+b > 0) cout<<"POSITIVO";
    else cout<<"NEGATIVO";

    return 0;
}