#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c; cin >> a >> b >> c;

    if (a==90 || b==90 || c==90) cout<<"RECTANGULO";
    else if (a==60 && b==60 && c==60) cout<<"EQUILATERO";
    else if (a==b || a==c || b==c) cout<<"ISOSCELES";
    else if (a!=b && a!=c && b!=c) cout<<"ESCALENO";

    return 0;
}