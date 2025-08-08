#include <iostream>

using std::cout;
using std::endl;

int main() {
    int num = 0;


    while (num <= 10){
        cout << "El numero es: " << num << endl;
        num++;
    }
    
    do {
        cout << "No me repetire, o eso creo :v" << endl;
    } while (num <= 10);
    

    for (int x=0; x <= 10; x++) {
        
        if (x == 3) { continue; }
        if (x == 10) { break; }

        cout << x << ", ";
    }


    return 0;
}