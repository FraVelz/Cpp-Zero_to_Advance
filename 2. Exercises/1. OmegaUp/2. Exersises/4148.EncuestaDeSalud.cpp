#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

struct values {
    int id;
    string name;
    double imc;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<values> arr(n);

    for (int i=0; i<n; ++i) {
        cin >> arr[i].id;
        cin.ignore();
        
        getline(cin, arr[i].name);
         
        int p; 
        double h;
        cin >> p >> h;

        arr[i].imc = p / (h*h);
    }

    for (int i=n-1; i>=0; --i) {
        cout<<arr[i].id<<' ' << arr[i].name<<' ';
        cout<<fixed<<setprecision(1)<<arr[i].imc;
        if (i<n-1) cout<<'\n';
    }

    return 0;
}