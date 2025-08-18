#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string m; cin>>m;
    int sum=0;

    for ( char c : m ) {
        sum+= c - '0';
    }
    cout << sum; 

    return 0;
}