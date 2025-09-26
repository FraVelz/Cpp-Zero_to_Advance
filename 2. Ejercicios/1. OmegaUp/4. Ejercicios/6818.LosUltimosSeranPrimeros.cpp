#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> arr;
    string ent;
    
    while (true) {
        cin>>ent;
        if (ent=="#") break;
        arr.push_back(ent);
    }

    for (int i=arr.size()-1; i>=0; --i) cout<<arr[i]<<'\n';

    return 0;
}