#include <iostream>

using std::cout;

int main() {
    
    std::string name = "Francisco";

    cout << "\n > variable (" << name << "): "<< name.length() << " Caracteres" << std::endl;
    
    cout << "\n > Cadena vacia? "<< name.empty() << std::endl;
    
    name.clear();
    cout << "\n > Ahora que dice la variable? "<< name << std::endl;
    
    name.append("Javier");
    cout << "\n > Ahora que dice la variable x2? "<< name << std::endl;
    
    cout << "\n > la 1ra letra de tu nombre: "<< name.at(0) << std::endl;
    
    name.insert(3, "x");
    cout << "\n > Ese es tu nombre? "<< name << std::endl;
    
    name = "Francisco Velez";
    cout << "\n > Desde donde se encuentra la V? "<< name.find("V") << std::endl;
    
    name.erase(14,16);
    cout << "\n > Y ahora que dice la variable? "<< name << std::endl;
    
    cout << "\n > Tamaño de bytes: "<< sizeof(name) << std::endl;


    return 0;
}