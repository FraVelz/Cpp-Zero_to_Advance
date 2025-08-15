#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a = {5,3,7,1,8,29,2,89,2,63,6,23,12};

    for (int i=0; i<a.size(); ++i) {
        for (int j=0; j<a.size(); ++j) {
            if (a[i] > a[j]) {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    for (int i=0; i<a.size(); ++i) cout<<i<<' ';
    return 0;
}
