#include <iostream>

using namespace std;

// Estructuras y Ennumeraciones

struct students {
    string name;
    double average;
    bool exist;
};

// Solo se utiliza caracteres o numeros
enum Dia {
    lunes = 1,
    martes = 2,
    miercoles = 3,
    jueves = 4,
    viernes = 5
};

int main() {
    
    students student1;

    student1.name = "Javier";
    student1.average = 8.5;
    student1.exist = true;

    cout << student1.name << endl;
    cout << student1.average << endl;
    cout << student1.exist << endl;

    Dia hoy = viernes;

    cout << hoy;

    return 0;
}
