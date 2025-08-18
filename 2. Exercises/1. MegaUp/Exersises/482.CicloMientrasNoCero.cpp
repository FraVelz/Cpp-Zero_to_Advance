#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int num1 = 1, num2 = 0;

    while (num1) {
        cin >> num1; num2 += num1;
    }

    cout << num2;

    return 0;
}

// ********** Obtimizado **********//

/*
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, suma = 0;
    while (cin >> x && x != 0) {
        suma += x;
    }

    cout << suma << '\n';
    return 0;
}
*/