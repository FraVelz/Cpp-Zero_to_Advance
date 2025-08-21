#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string texto; cin >> texto;

    int contador[6] = {0};

    for (char c : texto) {
        if (c == 'm') contador[0]++;
        else if (c == 'i') contador[1]++;
        else if (c == 'g') contador[2]++;
        else if (c == 'u') contador[3]++;
        else if (c == 'e') contador[4]++;
        else if (c == 'l') contador[5]++;
    }
    
    
    int minimo = INT_MAX;
    
    for (int num : contador) {
        if (num < minimo) { minimo = num; }
    }
    cout << minimo;

    return 0;
}