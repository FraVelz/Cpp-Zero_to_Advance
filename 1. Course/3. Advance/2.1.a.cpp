#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a = {1,2,3,4,5,6,7};

    int sup=a.size(), inf=0, medio, encontrar=5;

    while (inf <= sup) {
        medio= (sup+inf) / 2;

        if (a[medio] == encontrar) {
            break;

        } else if (a[medio] > encontrar) {
            sup=medio-1;

        } else if (a[medio] < encontrar) {
            inf=medio+1;
        }
    }
    cout << "\n > La posicion de es: "<<medio;

    return 0;
}