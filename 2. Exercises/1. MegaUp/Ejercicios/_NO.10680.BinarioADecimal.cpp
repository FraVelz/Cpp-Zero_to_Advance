#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string binario; cin >> binario;
    long long number = 0;

    for (char c : binario) {
        number = number * 2 + (c - '0');
    }
    
    cout << number;
    return 0;
}