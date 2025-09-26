#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char c; int b,h, line;
    cin>>c>>b>>h;

    for (int i=0; i<h; ++i) {
        if (i==0 || i==h-1) line=b;
        else line = 2;

        if (line!=2) {
            for (int j=0; j<line; ++j) cout<<c;

        } else {
            cout<<c;
            for (int j=0; j<b-2; ++j) cout<<' ';
            cout<<c;
        }

        if (i<h-1) cout<<'\n';
    }

    return 0;
}

// Nombre: Francisco Javier Velez Otavo
// Grado: 1001
// UserOmegaup: Fravelz
// Residencia: Colombia, Bogota DC, San Cristobal

