#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,y,z; cin>>x>>y>>z;

    if (x==y && z==x) cout<<"equilatero";
    else if (x!=y && z!=x && y!=z) cout<<"escaleno";
    else cout<<"isosceles";

    return 0;
}
