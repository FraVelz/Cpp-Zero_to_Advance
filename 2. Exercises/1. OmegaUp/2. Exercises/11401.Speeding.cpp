#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,v=0; cin>>n;
    int d1,t1;

    for (int i = 0; i<n; i++) {
        int d,t; cin>>d>>t;

        if (d==0 && t==0) {
            d1=d; 
            t1=t;

        } else {
            int tmp = (d-d1)/(t-t1);
            if (tmp > v) v = tmp;

            d1=d; 
            t1=t;
        }

    }

    cout << v;

    return 0;
}
