#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i=1; i<=1000; ++i) {
        if ( (i%3 == 0) && (i%5 ==0) ) cout<<"FizzBuzz";
        else if (i%5 == 0) cout<<"Buzz";
        else if (i%3 == 0) cout<<"Fizz";
        else cout<<i;

        if (i< 1000) cout<<'\n';
    }

    return 0;
}