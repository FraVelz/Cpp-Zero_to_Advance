#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    map<double, pair<int, string>> mp;

    for (int i=0; i<n; ++i) {
        string name;
        int id, peso; 
        double altura; 

        cin>>id; 
        cin.ignore();

        getline(cin, name); 
        cin>>peso>>altura;
        
        double imc = peso/(altura*altura); 

        mp[imc].first=id;
        mp[imc].second=name;
    }
    vector<double> arr;

    for (auto e : mp) arr.push_back(e.first); 

    int cont=0;

    for (int i=arr.size()-1; i>=0; --i) {
        pair<int, string> e = mp[arr[i]];

        cout<<e.first<<' '<<e.second<<' ';
        cout<<fixed<<setprecision(1)<<arr[i];

        if (i>0) cout<<'\n';
    }

    return 0;
}