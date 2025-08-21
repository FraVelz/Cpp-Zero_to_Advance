#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int count=0;
    char x;
    string a; 
    
    cin>>x>>a;

    for (char c : a) if (c == x) ++count;
    cout<<count;

    return 0;
}