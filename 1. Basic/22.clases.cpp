#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

/*
 TODO: Definiciones de la Programacion Orientada a Objectos (POO). 
 *
 ? POO: 
 * La Programación Orientada a Objetos es un estilo de programación que tiene 
 * como objetivo hacer que pensar en programación se acerque más a pensar en el 
 * mundo real.
 *
 ? Los objetos se crean utilizando clases, que son en realidad el punto focal de 
 * la POO.
 * 
 * La clase describe lo que será el objeto, pero es independiente del propio 
 * objeto.
 * 
 ? Abstracion: Es el proceso de rempresentar caracteristicas esenciales sin 
 * tener en cuenta los detalles de implemetacion o caracteristicas individuales.
 * EJ. Abstraer 100 años de soledad, se puede decir que es solo un libro.
 * 
 ? Encapsulacion:
 * Parte del significado de la palabra encapsulación es la idea de "rodear" una 
 * entidad, no solo para mantener lo que está dentro junto, sino también para 
 * protegerlo.
 * 
 ? Constructor:
 * Apenas creada una clase en c++ se llama al constructor por definicion, de esa
 * clase.
 * 
 ? Destructor:
 * Similar al constructor pero a la inversa cuando la clase de destruye se llama
 * automaticamente al destructor.
 * 
 ? El operador de selección de miembro de flecha (->)
 * se utiliza para acceder a los miembros de un objeto con un puntero.
 *
 * Objetos Constantes: Solo los objectos no constantes pueden llamar funciones
 * no constantes y tanbien a la viseversa.  
 * 
 ? Getters: 
 * Son métodos que devuelven el valor de un atributo privado de una clase.
 * 
 ? Setters:
 * Son métodos que permiten modificar el valor de un atributo privado de una 
 * clase.
 * 
*/


// ********************* Clase creada completa ********************* //

class Rectangulo {
    private:
        int altura, base; // Variables privadas
    
    public:
        Rectangulo(int _altura, int _base) { // Constructor
            cout << " [+] Se construye el objecto1 :) \n";

            altura = _altura;
            base = _base;
        };

        Rectangulo(double _altura, double _base) { // Sobrecarga del Constructor (Constructor 2)
            cout << " [+] Se construye el objecto2 :) \n";
            
            altura = _altura;
            base = _base;
        };

        ~Rectangulo() { // Destructor
            cout << " [-] Se destruyo el objecto :( \n";
        };

        int perimetro() { // Funcion 1
            return 2 * (base + altura);
        };

        int area() { // Funcion 2
            return base * altura;
        };

        string queSoy() const {
            return "Un rectangulo :) \n";
        }        
};

// ********************* Clase definida y creada ********************* //


class Rectangulo1 {
    private:
        int altura, base;
    
    public:
        Rectangulo1(int, int);
        Rectangulo1(double, double);
        ~Rectangulo1();

        int perimetro();
        int area();

        string queSoy() const;
};

Rectangulo1::Rectangulo1(int _altura, int _base) { 
    cout << " [+] Se construye el objecto1 :) \n";

    altura = _altura;
    base = _base;
};

Rectangulo1::Rectangulo1(double _altura, double _base) {
    cout << " [+] Se construye el objecto1 :) \n";
    
    altura = _altura;
    base = _base;
};

Rectangulo1::~Rectangulo1() { 
    cout << " [-] Se destruyo el objecto1 :( \n";
};

int Rectangulo1::perimetro() {
    return 2 * (base + altura);
};

int Rectangulo1::area() { 
    return base * altura;
};


string Rectangulo1::queSoy() const {
    return "Un rectangulo :) \n";
}

// ********************* Iniciadores de Miembros ********************* //

/*
class MyClass {
    private:
        int regVar;
        const int constVar; 

    public:
        MyClass(int a, int b) {
            regVar = a;
            constVar = b; //! Error: No se puede pasar valor dee una variable a una constante.
        }
};
*/

// * Recomendable en todos los casos del constructor por eficiencia.

// ? Para evitar el error anterior se utiliza la siguiente sintaxis.

class MyClass {
    private:
        int regVar;
        const int constVar;

    public:
        MyClass(int a, int b) : regVar(a), constVar(b) {}
};

// ********************* Clase Amiga ********************* //
// * (para acceder a miembros privados de una clase)

class MyOtherClass {
    public:
        MyOtherClass() {
            regVar = 0;
        }

 private:
    int regVar;
    
  friend void someFunc(MyOtherClass &obj);
};

void someFunc(MyOtherClass &obj) {
    obj.regVar = 42;
    cout << obj.regVar;
}

// ********************* This ********************* //
// This es un puntero al objecto.

class MyClass1 {
    private: int var;

    public: 
        MyClass1(int a) : var(a) {}
        
        void printInfo() {
            cout << var << '\n'; // igual resultado.
            cout << this->var << '\n'; // igual resultado.
            cout << (*this).var << '\n';  // igual resultado.
        }
};

// ************************* Operadores de Sobrecarga ************************* //

class PlataCOP {
    private:
        int COP;

    public:
        PlataCOP(int pesosCOP=0) : COP(pesosCOP) {}

        int getCOP() {
            return this->COP;
        };

        PlataCOP operator+(PlataCOP pl_1) {
            return PlataCOP{this->COP + pl_1.COP};
        }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << '\n';

    Rectangulo objecto = Rectangulo(10, 5);

    Rectangulo *puntero = &objecto;

    cout << '\n';

    cout << objecto.area() << '\n';
    cout << objecto.perimetro() << '\n';
    cout << puntero->perimetro() << '\n';
    
    
    const Rectangulo objecto2 = Rectangulo(2, 5);
    cout << objecto2.queSoy() << '\n';
    // objecto2.area(); // ! Error: metodo no es const.


    MyOtherClass obj;
    someFunc(obj);
    cout << '\n';

    PlataCOP money1 = PlataCOP(1000);
    PlataCOP money2 = PlataCOP(2000);
    cout << (money1 + money2).getCOP() << '\n';

    //* Formas de llamar a una clase.

    // ? 1. Crear un objeto (instancia normal)

    PlataCOP p1;          // instancia del objeto
    cout << p1.getCOP();  // llamada a un método

    // ? 2. Crear un objeto usando punteros

    PlataCOP* p2 = new PlataCOP(1000); // instancia en el heap
    p2->getCOP();
    delete p2; // liberar memoria

    // ? 3. Con constructor parametrizado

    PlataCOP p3(999);

    // ? 4. Usar miembros estáticos sin crear un objeto

    // Solo funciona si el metodo saludar es indicado como static
    // PlataCOP::saludar(); // no requiere instancia

    // ? 5. Con herencia y punteros polimórficos

    // Animal* a = new Perro(); // Animal clase padre, Perro clase hija
    // a->sonido(); // salida: Guau // funcion
    // delete a; // liberar memoria

    // ? 6. Con objetos temporales

    cout << PlataCOP(2500).getCOP();

    
    return 0;
}