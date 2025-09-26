#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    bool band=false;

    while (n--) {
        int a; cin>>a;
        if (a==8) band=true;
    }

    cout<<band;

    return 0;
}
