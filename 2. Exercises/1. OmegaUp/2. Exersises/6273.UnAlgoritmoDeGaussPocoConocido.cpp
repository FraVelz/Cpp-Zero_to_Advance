#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b,c,d,e,f,g,h,i,j; cin >> a; 

    b = (a / 100) + 1;
    c = ((3 * b) / 4) - 12;

    e = (a % 19) + 1;
    f = (8 * b + 5) / 25 - (5 + c);

    g = 5 * a / 4 - (c + 10);
    h = (11 * e + 20 + f) % 30;

    if (b == 25 && e >= 11) ++h;

    if (h == 24) ++h;

    i = 44 - h;
    if (i < 21) i += 30;

    j = i + 7 - ((g + i) % 7);

    if (j <= 31) cout << j << " 3";
    else cout << j-31 << " 4";
    
    return 0;
}