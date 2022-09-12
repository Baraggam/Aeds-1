#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 0,
        operador;
    float x,
          y;
    printf("Este programa ira realizar a conta aritmetica entre dois valores reais.\n");
    printf("\nDigite o primeiro numero: ");
    scanf("%f", &x);
    printf("\nDigite o segundo numero: ");
    scanf("%f", &y);
    do
        {printf("\nDigite a conta desejada:\n\n[1] Sair do programa - [2] Adicao - [3] Subtracao - [4] Multiplicacao - [5] Divisao: ");
        scanf("%i", &operador);
        switch (operador){
            case 1:
                count = count + 1;
                printf("\nObrigado por usar este programa"); break;
            case 2:
                printf("\nA adicao entre %4.2f e %4.2f vale: %4.2f\n", x, y, x + y); break;
            case 3:
                printf("\nA subtracao entre %4.2f e %4.2f vale: %4.2f\n", x, y, x - y); break;
            case 4:
                printf("\nA multiplicacao entre %4.2f e %4.2f vale: %4.2f\n", x, y, x * y); break;
            case 5:
                printf("\nA divisao entre %4.2f e %4.2f vale: %4.2f\n", x, y, x / y); break;}}
    while (count != 1);
    return 0;
}
