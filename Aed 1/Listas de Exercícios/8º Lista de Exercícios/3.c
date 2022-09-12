#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool error;
    int termos,
        denominador = 1;
    float h = 0;
    printf("Esse programa ira calcular a soma da sequencia: 1/1, 1/3, 1/9, 1/27...\n");
    do{
        printf("\nDigite quantos termos deseja para realizar a conta: ");
        scanf("%i", &termos);
        error = termos < 0;
        if (error)
            printf("\nEntrada invalida. Digite novamente.\n");
    }while (error);
    for (int n = 1; n <= termos; n ++){
        h += (float) 1 / (float) denominador;
        denominador *= 3;}
    printf("\nO resultado dessa soma com %i termo(s) vale: %.2f.", termos, h);
    return 0;
}
