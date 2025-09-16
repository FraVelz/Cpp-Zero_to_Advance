#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    if (473==n) cout<<"GUANAJUATO";
    else if (33==n) cout<<"GUADALAJARA";
    else if (445==n) cout<<"YURIRIA";
    else if (222==n) cout<<"PUEBLA";
    else if (477==n) cout<<"LEON";
    else if (442==n) cout<<"QUERETARO";
    else if (664==n) cout<<"TIJUANA";
    else if (722==n) cout<<"TOLUCA";
    else cout<<"NO ENCONTRADO";

    return 0;
}