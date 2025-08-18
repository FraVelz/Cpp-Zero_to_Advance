#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned int p, counter = 0; cin >> p;
    vector<int> n;

    while (p--) {
        int data; cin >> data;
        n.push_back(data);
    };

    for (int num : n) {
        while (num--) {
            string data; cin >> data;
            if (data == "oveja") ++counter; 
        }
    }

    cout << counter;

    return 0;
}


// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int P;
//     cin >> P;
//     while (P--) {
//         int N;
//         cin >> N;
//         int countOvejas = 0;
//         string animal;
//         for (int i = 0; i < N; ++i) {
//             cin >> animal;
//             if (animal == "oveja")
//                 ++countOvejas;
//         }
//         cout << countOvejas << '\n';
//     }

//     return 0;
// }
