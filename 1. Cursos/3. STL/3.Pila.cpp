// TODO: Ejercicios de Pila (Stack)

/*
1. **Revertir una cadena**
   * Dada una palabra, usa una pila para imprimirla al revés.
   * Ejemplo: `"hola"` → `"aloh"`

2. **Paréntesis balanceados**
   * Verifica si una expresión matemática tiene paréntesis correctamente balanceados.
   * Ejemplo: `(2+3)*(4/(5-1))` → válido.
   * Ejemplo: `(2+3*(4-1)` → inválido.

3. **Deshacer operaciones (Undo)**
   * Simula un editor de texto con dos operaciones:
     * `"escribir X"` → agrega la letra X.
     * `"deshacer"` → elimina el último carácter escrito.
     
   * Usa una pila para manejar el historial.

4. **Evaluar expresión postfija (RPN)**
   * Evalúa expresiones como: `3 4 + 2 *` → `14`.
   * Usa una pila para ir guardando operandos y aplicar operaciones.

5. **Próximo mayor elemento**
   * Dado un arreglo, para cada número encuentra el primer número mayor que aparece a su derecha.
   * Ejemplo: `[4, 5, 2, 10, 8]` → `[5, 10, 10, -1, -1]`.
   * Se resuelve eficientemente con una pila.
*/

#include <iostream>
#include <stack>

using namespace std;

string solve1(string s) {
    string res ="";

    stack<char> pila;

    for (char c: s) pila.push(c);
    
    while (!pila.empty()) {
        res += pila.top();
        pila.pop();
    }

    return res;
}

bool solve2 (string text) {
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s = "hello";
    cout<<"\n > Exersises 1:";
    cout<<"\n texto original: "<<s;
    cout<<"\n texto invertido: "<<solve1(s);

    string ecuacion = "(2+3)*(4/(5-1))";

    cout<<"\n\n > Exersises 2:";
    cout<<"\n texto original: "<<ecuacion;
    cout<<"\n texto Parentesis Balanceados: " << solve2(ecuacion);

    return 0;
}