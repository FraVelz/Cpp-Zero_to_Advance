#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, d; cin >> n >> d;
    deque<int> dq;
    
    while (n--) {
        int a; cin>>a;
        dq.push_back(a);
    }
    
    rotate(dq.begin(), dq.begin()+d+1, dq.end());

    int cont=0;
    for (int e : dq) {
        cout<<e;
        if (++cont != dq.size()) cout<<' ';
    }

    return 0;
}