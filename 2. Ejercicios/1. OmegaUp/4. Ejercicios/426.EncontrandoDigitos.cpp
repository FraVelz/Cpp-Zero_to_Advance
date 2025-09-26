#include <iostream>
#include <array>
#include <string>
#include <cctype>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    cin.ignore();

    array<int, 10> arr = {};

    while (n--) {
        string s; 
        getline(cin, s);

        for (char e: s) {
            if (isdigit(e)) arr[int(e - '0')]++;
        }
    }

    for (int i=0; i<10; ++i) {
        cout<<"El "<<i<<" aparece "<<arr[i]<<" veces.";

        if (i<9) cout<<'\n';
    }

    return 0;
}