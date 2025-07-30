#include <stdio.h>

int main (){
    int a = 10;
    int b = 6;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b;

    printf ("Soma: %d\n", soma);
    printf ("Diferença: %d\n", diferenca);
    printf ("Produto: %d\n", produto);
    printf ("Quociente: %d\n", quociente);

        double x = 5.5;
        double y = 2.2;
        double soma2 = x + y;
        double diferenca2 = x - y;
        double produto2 = x * y;
        double quociente2 = x / y;

        printf ("Soma: %.2f\n", soma2);
        printf ("Diferença: %.2f\n", diferenca2);
        printf ("Produto: %.2f\n", produto2);
        printf ("Quociente: %.2f\n", quociente2);


    return 0;
}