#include <cstdio>

// ******************** Prueba #1 - Codeforces ******************** //

//* Sin STL **********************************************************

int main() {
    int v, a, b, c; scanf("%d", &v);
    int res = 0;

    while (v--) {
        scanf("%d %d %d", &a, &b, &c);
        res += a + b + c >= 2;
    }

    printf("%d", res);
    return 0;
}

// * Con STL *********************************************************

// #include <iostream>

// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int concursos, a, b, c, result = 0;
//     cin >> concursos;

//     while (concursos--) {
//         cin >> a >> b >> c;
//         result += (a + b + c >= 2);
//     }

//     cout << result;
//     return 0;
// }
