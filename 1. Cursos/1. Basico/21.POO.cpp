#include <iostream>

using namespace std;

/*
Se pueden agregar varios constructores para 
personalizar los datos. y asi hacer algo similar a las
funciones sobrecargadas.
*/

class Carro {
    private: 
        int gasolina = 200;

    public:
        // Miembros de la clase (variables)
        
        string name;
        string marca;
        int llantas;
        int recorrido;
        
        bool prendido = false;
        int veloccidad = 0;

        // Constructor
        Carro(
            string name="", string marca="", int llantas=4, 
            int recorrido=0, bool prendido = false
        ) {
            this->name = name;
            this->marca = marca;
            this->llantas = llantas;

            this->recorrido = recorrido;
            this->prendido = prendido;
        }

        // Getter y Setter 
        int getGasolina() { return gasolina; }

        void setGasolina(int gasolina) {
            this->gasolina = gasolina;
        }

        // Funciones

        void Accelerar(int aumento) {
            if (!prendido) {
                cout << " [-] El carro no esta prendido, entonces no puede accelerar :(" << endl;
            
            } else {
                veloccidad += aumento;
                cout << " [+] El Carro tiene una veloccidad de " << veloccidad << " KM por hora." << endl;
            }
        }
        
        void Desaccelerar(int disminucion) {
            if (!prendido || veloccidad > 0 ) {
                cout << " [-] El carro no esta accelerando, entonces no puede disminuir de veloccidad :(" << endl;
            
            } else {
                veloccidad -= disminucion;
                cout << " [+] El Carro tiene una veloccidad de " << veloccidad << " KM por hora." << endl;
                
                if (veloccidad <= 0) {
                    veloccidad = 0;
                    cout << " [?] El Carro se quedo quieto :v" << endl;
                }
            }
        }

        void Prender() {
            if (!prendido) {
                cout << " [+] Carro Prendido :)" << endl;
            
            } else {
                cout << " [-] El Carro se Apago :(" << endl;
            }
        }
};

// Herencia

class Camion : public Carro {
    public:
        void transportar(string objecto) {
            cout << " [+] Transportando " << objecto << endl;
        } 
};


int main() {
    Carro lambo = Carro("El lambo", "Lamborghini");
    
    Carro mercedes;
    
    mercedes.name = "M12";
    mercedes.marca = "mercedes";
    mercedes.recorrido = 0;
    mercedes.llantas = 5; // 1 de repuesto

    cout << "\n";

    mercedes.Prender();

    return 0;
}
