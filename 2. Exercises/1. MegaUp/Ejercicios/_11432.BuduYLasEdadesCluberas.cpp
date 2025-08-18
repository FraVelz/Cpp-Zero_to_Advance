#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solution(string& a) {
    vector<int>
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a; cin>>a;

    solution(a);

    int n=a.size();
    int i=0;
    for (int c : a) {
        if (i==0) cout<<'[';

        cout<<'\''<<c<<'\'';

        if (i < n-1) cout<<", ";
        if (i==n-1) cout<<']';
        ++i;
    }

    return 0;
}