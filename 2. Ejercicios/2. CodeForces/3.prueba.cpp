// #include <iostream>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int lines, num = 0; cin >> lines;
//     string x;

//     while (lines--) {
//         cin >> x;
//         if (x.find("++") != string::npos) {
//             num += 1;
            
//         } else if (x.find("--") != string::npos) {
//             num -= 1;
//         }
//     }

//     cout << num;
    

//     return 0;
// }


// **************************** Codigo Obtimizado **************************** //

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, result = 0;
    cin >> n;

    while (n--) {
        string op;
        cin >> op;

        if (op[1] == '+') ++result;
        else --result;
    }

    cout << result << '\n';
    return 0;
}
