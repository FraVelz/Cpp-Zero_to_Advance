#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int num, ds=1;
    bool band=true;

    for (int i=0; i<3; ++i) {
        for (int j=0; j<3; ++j) {
            int a; cin>>a;

            if (i==j) {
                if (i==0) num = a;
                else if (num!=a) band=false;
            }

            if (j == 3-ds) {
                if (num!=a) band=false;
                ++ds;
            }
        }
    };

    cout << (!band ? "Sigue buscando" : "Tesoro encontrado");

    return 0;
}