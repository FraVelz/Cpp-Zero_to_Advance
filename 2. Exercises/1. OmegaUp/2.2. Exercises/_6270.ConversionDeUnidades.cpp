#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int c; cin>>c;
    
    cout << (c+273) << ' ' << (c+32) << ' ' << c;

    return 0;
}

