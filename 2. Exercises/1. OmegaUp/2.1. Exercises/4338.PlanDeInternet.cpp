#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    if (n==0) return 0;
    if (n>10000) return 0;

    cout<<"Plan #";

    if (n<=500)        cout<< "1 - $"<< (n*2);
    else if (n<=1000)  cout<< "2 - $"<< (n*1.80);
    else if (n<=2000)  cout<< "3 - $"<< (n*1.60);
    else if (n<=4000)  cout<< "4 - $"<< (n*1.40);
    else if (n<=10000) cout<< "5 - $"<< (n*0.50);

    return 0;
}
