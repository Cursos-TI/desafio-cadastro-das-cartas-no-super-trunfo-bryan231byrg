#include <stdio.h>

/*
Incremento (++)
Pré-Incremento(++a)
Pós-Incremento(a++)
Decremento (--)
Pré-Decremento(--a)
Pós-Decremento(a--)
*/

int main (){

    int num1 = 1;

    printf("Antes Incremento: %d\n", num1);
    //num1 = num1 +1
    //num1 += 1
    num1++;
    printf("Após Incremento: %d\n", num1);

    //num1 = num1 - 1
    //num1 -= 1
    num1--;
    printf("Após Decremento: %d\n", num1);
    
}