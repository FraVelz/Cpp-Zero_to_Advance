#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin>>n>>m;

    double res = (m*1500.0) / (n*300.0);

    cout << fixed<<setprecision(1)<< res << " horas.";

    return 0;
}