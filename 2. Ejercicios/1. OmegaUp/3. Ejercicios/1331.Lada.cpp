#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int c; cin>>c;
    
    if (c==61) cout<<"Brasilia";
    else if (c==71) cout<<"Salvador"; 
    else if (c==11) cout<<"Sao Paulo";
    else if (c==21) cout<<"Rio de Janeiro";
    else if (c==32) cout<<"Juiz de Fora";
    else if (c==19) cout<<"Campinas";
    else if (c==27) cout<<"Vitoria";
    else if (c==31) {
        cout<<"Belo Horizonte";

    } else {
        cout << "LD no encontrada";
    }

    return 0;
}