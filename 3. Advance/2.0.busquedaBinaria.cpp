#include <iostream>
#include <array>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    array<int, 9> a = {1,2,3,4,5,6,7,8,9};

    int inf=0, sup=a.size()-1, medio, enc=6;

    while (inf<=sup) {
        medio = (sup+inf) / 2;

        if (a[medio] == enc) break;
        else if (a[medio] > enc) sup=medio-1;
        else if (a[medio] < enc) inf=medio+1;
    }
   
    cout << "\n > La Posicion del elemento /"<<enc<<"/ es : "<<medio;
    return 0;
}
