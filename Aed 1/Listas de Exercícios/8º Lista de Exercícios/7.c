#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool error;
    int x,
        divisiveis = 0,
        divisor = 1;
    printf("Esse programa ira verificar se um numero digitado e primo.\n");
    do{
        printf("\nDigite um numero natural: ");
        scanf("%i", &x);
        error = x < 0;
        if (error)
            printf("\nEntrada invalida. Digite novamente.\n");
    }while (error);
    for (int n = 1; n <= x; n ++){
        if (x % divisor == 0)
            divisiveis ++;
        divisor ++;}
    if (divisiveis == 1 || divisiveis == 2)
        printf("Esse numero e primo.");
    else
        printf("Esse numero nao e primo.");
    return 0;
}
