#include <iostream>

using namespace std;

int main() {

    return 0;
}


/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> patos(n);
    for (int i = 0; i < n; ++i) {
        cin >> patos[i];
    }

    int minimo = *min_element(patos.begin(), patos.end());
    int maximo = *max_element(patos.begin(), patos.end());

    int total = maximo - minimo + 1;
    int perdidos = total - n;

    cout << perdidos << endl;

    return 0;
}

*/