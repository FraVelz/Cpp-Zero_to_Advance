#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string t1, t2; 
    cin >> t1 >> t2;

    int n1 = (t1[t1.size()-1]) - '0';
    int n2 = (t2[t2.size()-1]) - '0';

    string res = to_string(n1 * n2);

    cout << (res.size() > 1) ? res[1] : res[0];
    return 0;
}