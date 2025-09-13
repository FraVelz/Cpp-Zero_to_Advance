#include <iostream>
#include <vector>

using namespace std;

vector<int> reg;

int fib(int n) {
    long long a=0, b=1;

    for (int i=2; i<=n; ++i) {
        long long c = a+b;
        a=b;
        b=c;
    }

    return (n==0 ? a : b);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    return 0;
}
