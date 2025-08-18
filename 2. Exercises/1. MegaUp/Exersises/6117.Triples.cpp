#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cont=0; cin>>n;
    vector<int> arr(n);

    for (int i=0; i<n; ++i) {
        int a; cin>>a;

        if (a%3==0) arr[cont++] = i+1;
    }

    if (cont==0) {
        cout<<"No hay triples.";
        return 0;
    }

    cout<<cont<<'\n';

    for (int e : arr) {
        cout<<e;
        if (e!=arr[cont-1]) cout<<' ';
        else break;
    }

    return 0;
}