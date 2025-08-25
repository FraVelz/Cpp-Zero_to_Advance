#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a; getline(cin,a);
    int sum=0;

    for (char e : a) if (isdigit(e)) sum += e - '0';

    cout<<sum;

    return 0;
}