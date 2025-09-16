#include <iostream>
#include <vector>

using namespace std;

vector<long long> memo;

int fib(int n) {
    if (n <= 1) return memo[n]= n;
    if (memo[n] != -1) return memo[n];
    
    return memo[n] = fib(n-1) + fib(n-2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    memo.assign(n+1, -1);
    fib(n);

    int last_e=memo[n];

    for (int e:memo) {
        if (e==0) continue;
       cout<<e;
       if (e != last_e) cout<<' ';
    }

    return 0;
}