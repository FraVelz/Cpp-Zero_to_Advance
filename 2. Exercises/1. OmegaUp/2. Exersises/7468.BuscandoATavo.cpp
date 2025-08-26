#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a; getline(cin, a);
    int at=0;

    for (char e: a) if (e=='*') ++at;

    if (at<=1) cout<<"BIEN";
    else if (at==2) cout<<"HAPPY";
    else cout<<"BUSCAR A TAVO";

    return 0;
}
