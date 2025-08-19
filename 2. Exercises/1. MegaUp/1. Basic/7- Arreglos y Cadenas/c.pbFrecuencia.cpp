#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned int teachers, students, favorites_teachers[1000] = {};
    cin >> teachers >> students;

    for(int i = 0; i < students; ++i) {
        cin >> favorites_teachers[i]; 
    };
    

    cout << "Hola mundo!";

    return 0;
}