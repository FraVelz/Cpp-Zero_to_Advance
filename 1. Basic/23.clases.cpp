#include <iostream>

using namespace std;

// ************************** Herencia ************************** //
// La herencia nos permite definir una clase basada en otra clase. 


class Mother {
    public:
        Mother() {};

        void sayHi() {
            cout << "Hi";
        } 
};

//  Tipos de herencia (public, private, protected)

class Daughter : public Mother {
    public: 
        Daughter() {};
};

// ****************** Variables Tipo Proctect ****************** //

class Mother {
    private: int var = 0;

    protected: int s;

    public:
        void sayHi() { cout << var; }
};

// ********************* Tipos de Herencia ********************* //

/*
Herencia Pública: los miembros públicos de la clase base se convierten 
en miembros públicos de la clase derivada y los miembros protegidos de 
la clase base se convierten en miembros protegidos de la clase 
derivada. Los miembros privados de una clase base nunca son accesibles 
directamente desde una clase derivada, pero se pueden acceder a través 
de llamadas a los miembros públicos y protegidos de la clase base.

Herencia Protegida: los miembros públicos y protegidos de la clase 
base se convierten en miembros protegidos de la clase derivada.

Herencia Privada: los miembros públicos y protegidos de la clase base 
se convierten en miembros privados de la clase derivada.
*/

class Daughter1: public Mother {};
class Daughter2: private Mother {};
class Daughter3: protected Mother {};

// ************ Constructor y Destructor en Herencia ************ //

/*
*/


class h1 {
    public:
        h1() {
            cout << "Constructor h1";
        };
        
        ~h1() {
            cout << "Destructor h1";
        };
};

class h2 : public h1 {
    public:
        h2() {
            cout << "Constructor h2";
        };
        
        ~h2() {
            cout << "Destructor h2";
        };
};

/*
Si se crea un objecto h2, la forma en que se ejecutara el constructor
y destructor, de la clase padre, e hija seran las siguientes:

1. Constructor h1
2. Constructor h2

3. Destructor h2
4. Destructor h1

*/

// ************ Polimorfismo con Funciones Virtuales ************ //

/*
Para crear una funcion que se hereda de otra y se modifica 
(polimorfismo) se nesesita de este tipo de funciones, de esta manera
se indica que la funcion es una especie de plantilla que será 
modficada en la clase hija, y si esto no sucede, saltará un error.

Al imprementarse una funcion pura en una clase, la clase por si solo
no podra crear objectos y solo podra ser utilizado como una clase base
para crear nuevas clases y a estas clases se le conocen como clases 
abstractas.
*/

class Enemy {
    public:
        virtual void attack() { // Tiene implementacion propia
            cout << "attack - funcion virtual";
        }

        virtual void attack2() = 0; // Funcion virtual Pura
};

class Ninja: public Enemy {
    public:
        void attack() {
            cout << "Ninja!" << endl;
        }
};

class Monster: public Enemy {
    public:
        void attack() {
            cout << "Monster!" << endl;
        }
};


int main() {
    return 0;
}