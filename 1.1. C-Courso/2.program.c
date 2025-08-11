#include <stdio.h>


// Todo: Entrada de datos por Consola, Condicionales, Operadores de 
// Todo: Asignacion, y Bucles.


int main() {
    // ? Entrada de Usuario

    int num;
    printf(" > Digite 1 numero: ");
    scanf("%d", &num);

    printf("Tu digitaste: %d", num);
    printf("\n");
    
    int x, y;

    printf("\n > Digite 2 numeros: ");
    
    scanf("%d %d", &x, &y);
    printf("Tu digitaste: %d, %d", x, y);
    printf("\n");

    // ? Condicionales

    // * If - Else If - Else

    if( 2 > 0) {
        //some code

    }  else if(1 < -2) {
        //some other code

    }  else {
        //some other code
    }

    // * Switch

     switch(1) {
        case 1:
            printf("Gold");
            break;
        case 2:
            printf("Silver");
            break;
        case 3:
            printf("Bronze");
            break;
        default:
            printf("No medal");
    }

    /*
    (condicion1 || condicion2) (operador or)
    (condicion1 && condicion2) (operador and)
    (!condicion1) (operador not)
    */


    /*
    * Operadores de Asignacion
    
    variable--, variable++ (operadores de decremento e incremento).
    
    variable += 2 (Suma el valor interno con 2)
    variable -= 2 (Resta el valor interno con 2)
    variable *= 2 (Multiprica el valor interno con 2)
    variable /= 2 (Divide el valor interno con 2)
    variable %= 2 (Modulo del valor interno con 2)

    */


    // ? Bucles 

    // * While
    
    int x = 3;

    while (x <= 6) {
        printf("%d \n", x);
        x = x + 2;
    } 

    // * Do While

    num = 0;

    do {
        printf("%d \n", num);
        num += 3;  
    } while (num < 10);


    // * For

    for(int i = 1; i < 10; i++) {
        printf("%d \n", i);
    }
    
    return 0;
}