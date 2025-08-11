#include <cstdio>

/*
La notación Big O (también llamada Big O notation o notación O grande) 
es una forma de medir y expresar la eficiencia de un algoritmo, 
especialmente en términos de tiempo de ejecución o uso de memoria 
cuando el tamaño de la entrada crece.

Big O describe el peor caso posible (worst-case complexity), y lo hace 
en función de n, que representa el tamaño de la entrada.

Big(o) 

Big(o) = 1 (No contenga ciclos, ni recursion, 
ni llamar a funciones que no sea de Big(o) = 1)

Big(n) donde n es la entrada en un bucle for donde en el bucle 
incremente o decremente la variable del bucle en un numero constante, 
por ejemplo +1, etc.

Big(n^2) para un bucle con otro bucle anidado, Big(n^3) para un bucle
anidado dentro de otro bucle, que a su vez tiene adentro otro bucle
y asi succesivamente para todas los bucles anidados posibles.

Big(Log(n)) si la variable interna del bucle en vez de incrementar o
decrementar, aumenta multipricativamente, o disminuye en forma de 
division es este caso.

Big(Log(Log(n))) Y si va incrementando de forma exponencias es este 
caso.
*/

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
    }
    return 0;
}