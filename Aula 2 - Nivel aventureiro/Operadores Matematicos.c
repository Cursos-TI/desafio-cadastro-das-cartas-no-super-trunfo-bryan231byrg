#include <stdio.h>

int main (){

    /*
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */
    
    int num1, num2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Entre como numero 1: ");
    scanf("%d", &num1);
    printf("Entre como numero 2: ");
    scanf("%d", &num2);

    //Operação Soma
    soma = num1 + num2;

    //Operação subtração
    subtracao = num1 - num2;

    //Operação Multiplicação
    multiplicacao = num1 * num2;

    //Operação divisão
    divisao = num1 / num2;

    
    printf("A soma é: %d\n", soma);
    
    printf("A subtracao é: %d\n", subtracao);
    
    printf("A multiplicação é: %d\n", multiplicacao);
    
    printf("A divisão é: %d\n", divisao);


}