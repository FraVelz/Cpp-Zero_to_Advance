#include <iostream>
#include <string>
#include <array>


using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;

    bool res = true;
    
    if (a.size() != b.size()) {
        res = false;
        return 0;
    } 

    array<int, 256> count_a{0}, count_b{0};

    for (char c : a) count_a[(unsigned char)c]++;
    for (char c : b) count_b[(unsigned char)c]++;

    cout <<(  count_a==count_b ? "ANAGRAMA!" : "No :(" );

    return 0;
}