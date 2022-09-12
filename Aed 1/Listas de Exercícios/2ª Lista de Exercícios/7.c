#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,
          y,
          z;
    char operador;
    printf("[A] adicao - [S] subtracao - [M] multiplicacao - [D] divisao: ");
    scanf("%c", &operador);
    printf("\nDigite o primeiro numero: ");
    scanf("%f", &x);
    printf("\nDigite o segundo numero: ");
    scanf("%f", &y);
    if (operador == 'a')
        printf("\nA adicao entre %4.2f e %4.2f vale: %4.2f", x, y, x + y);
    else if (operador == 's')
        printf("\nA subtracao entre %4.2f e %4.2f vale: %4.2f", x, y, x - y);
    else if (operador == 'm')
        printf("\nA multiplicacao entre %4.2f e %4.2f vale: %4.2f", x, y, x * y);
    else
        printf("\nA divisao entre %4.2f e %4.2f vale: %4.2f", x, y, x / y);
    return 0;
}
