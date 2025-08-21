#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    double x,y; cin>>x;
    
    y= ( (x+x*x) / (5*x + 3) ) + x;
    y*= ( (x + x*x) / (5*x + 3) ) / ( ((x+ x*x) / (5*x + 3)) + 2*x);

    cout << y;

    return 0;
}