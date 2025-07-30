#include <stdio.h>

int main(){

    /*
    Atriubição Simples (=)
    Atribuição com soma (+=)
    Atribuição com Subtração (-=)
    Atribuição com Multiplicação (*=)
    Atribuição com Divisão (/=)
    */
    int num1 = 10, num2, resultado;

    resultado = 10;
    printf("Resultado: %d\n", resultado);

    //Resultado = Resultado + 20
    resultado += 20;
    printf("Resultado: %d\n", resultado);

    //Resultado = Resultado - num1
    resultado -= num1;
    printf("Resultado: %d\n", resultado);

    //Resultado = Resultado * 5
    resultado *= 5;
    printf("Resultado: %d\n", resultado);

    //Resultado = Resultato / 2
    resultado /= 2;
    printf("Resultado: %d\n", resultado);

 

}