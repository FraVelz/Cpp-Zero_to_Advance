#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int l1, t1, l2, t2; cin>>l1>>t1>>l2>>t2;

    if (l1>l2 && t1>t2) cout<<"Hueso 1";
    else if (l2>l1 && t2>t1) cout<<"Hueso 2";
    else cout<<"Perrito confundido :(";

    return 0;
}