#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b; cin >> a >> b;
    string c = a+b;
    cout<<c.size();
    
    return 0;
}