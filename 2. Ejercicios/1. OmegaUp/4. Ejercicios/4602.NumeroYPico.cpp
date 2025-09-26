#include <iostream>

using namespace std;

int pico(int a) { 
    if (a<=0) return 0;
    return a + pico(a/2); 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    cout << pico(n);

    return 0;
}
