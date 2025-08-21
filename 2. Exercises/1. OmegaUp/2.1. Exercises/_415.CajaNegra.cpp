#include <iostream>
#include <string>

using namespace std;


char element_repeat(string a) {
    for (char c : a) {}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; string a;
    cin>>n; cin.ignore();
    getline(cin, a);

    char res;
    for (char c : a) {
        int x=count_(c, a);

    }
    cout << element_repeat(a);

    return 0;
}