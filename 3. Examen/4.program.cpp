#include <iostream>

using namespace std;

struct hora {
    int d=0;
    int h;
    int m;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    hora a,b, res;

    cin>>a.h>>a.m;
    cin>>b.h>>b.m;

    res.m = a.m+b.m;
    res.h = a.h+b.h;

    if (res.m>=60) {
        res.h += res.m/60;
        res.m %= 60;
    }

    if (res.h>=24) {
        res.d += res.h/24;
        res.h %= 24;

        cout<<res.d<<' ';
    }

    cout<<res.h<<' '<<res.m;

    return 0;
}

// Nombre: Francisco Javier Velez Otavo
// Grado: 1001
// UserOmegaup: Fravelz
// Residencia: Colombia, Bogota DC, San Cristobal

