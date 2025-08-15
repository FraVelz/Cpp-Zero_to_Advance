#include <iostream>
#include <ctime>

using std::cout;
using std::endl;

int main() {
    srand(time(NULL)); // Semilla para general un numero aleatorio

    int num = rand() % 6; // Genera al azar un numero del 0-5

    cout << num;

    return 0;
}