#include <iostream>
#include <cmath>

using namespace std;

bool esPrimo(int n) {

    if (n <= 1) return false;
    else if (n == 2) return true;
    else if (n % 2 == 0) return false;

    for (int i=3; i<sqrt(n); i+=2) {
        if (n%i == 0) return false;
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    cout<< (esPrimo(n) ? "Waos :D" : "No waos :C");

    return 0;
}
