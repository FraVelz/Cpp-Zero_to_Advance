#include <iostream>

using namespace std;

void intercambiar_datos(string &x, string &y);

int main() {
    string name = "Francisco";
    int age = 17;
    bool student = true; 

    cout << name << ": " << &name << ": " << (int)&name << "\n";
    cout << age << ": " << &age << ": " << (int)&age << "\n";
    cout << student << ": " << &student << ": " << (int)&student << "\n";

    cout << endl;
    string x = "Valor de X", y = "Valor de Y";

    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;

    cout << endl;
    intercambiar_datos(x, y);
    
    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;

    return 0;
}

void intercambiar_datos(string &x, string &y) {
    string temp = x;
    x = y; 
    y = temp;

}
