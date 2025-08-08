#include <iostream>
#include <vector>

// typedef sirve para colocar un identificador a una funcion o objecto
// Using tiene el mismo funcionamiento es mas recomendado.
// Porque funciona mejor con plantillas.

typedef std::vector<std::pair<std::string, int>> pair_list_t;

// typedef std::string text_t;

using text_t = std::string;

int main (){
    // std::vector<std::pair<std::string, int>> pair_list; 
    pair_list_t pair_list;

    text_t name = "Francisco";

    std::cout << name << std::endl;

    return 0;
}