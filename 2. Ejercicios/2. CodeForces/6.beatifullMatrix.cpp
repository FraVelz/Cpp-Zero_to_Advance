#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // int  matrix[5][5], res;
    int elements, row, col;

    for (int i = 0; i < 5; ++i){
        for (int j = 0; j < 5; ++j){
            cin >> elements;
            // matrix[i][j] = elements;

            if (elements == 1) {
                // location[0] = i; 
                // location[1] = j;

                 row = i; col = j;
            } 
        }
    }
    
    // res = ( location[0] > 2) ? (location[0] - 2) : (2 - location[0]);
    // res += ( location[1] > 2) ? (location[1] - 2) : (2 - location[1]);
    
    cout << abs(row - 2) + abs(col - 2);

    return 0;
}