#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a,b; cin>>a;
    b=a;

    reverse(b.begin(), b.end());

    int res=0;
    for (int i=0; i<a.length(); ++i) {
        if (a[i] != b[i]) ++res; //por cada letra se agrega 2
    } 

    cout<<(res/2);

    return 0;
}

// Nombre: Francisco Javier Velez Otavo
// Grado: 1001
// UserOmegaup: Fravelz
// Residencia: Colombia, Bogota DC, San Cristobal

