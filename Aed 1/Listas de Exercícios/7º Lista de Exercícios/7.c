#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    int n,
        a1,
        razao,
        divisor;
    bool error,
         repetir;
    char resposta;
    printf("Esse programa ira verificar quantos termos de uma PA sao divisiveis por um numero a sua escolha\n");
    do{
        int divisiveis = 0;
        printf("\nDigite o primeiro termo: ");
        scanf("%i", &a1);
        printf("\nDigite a razao: ");
        scanf("%i", &razao);
        do{
            printf("\nDigite o numero de termos [numero inteiro positivo maior que 0]: ");
            scanf("%i", &n);
            error = n <= 0;
            if (error)
                printf("\nEntrada invalida. Digite novamente.\n");
        }while (error);
        printf("\nDigite o numero divisor [numero inteiro]: ");
        scanf("%i", &divisor);
        for (int count = 1; count <= n; count ++){
            if (a1 % divisor == 0)
                divisiveis ++;
            a1 += razao;}
        printf("\n%i termos sao divisiveis por %i.\n", divisiveis, divisor);
        do{
            fflush(stdin);
            printf("\nDeseja executar novamente? [S/N]: ");
            scanf("%c", &resposta);
            resposta = tolower(resposta);
            error = resposta != 's' && resposta != 'n';
            if (error)
                printf("\nEntrada invalida. Digite novamente.\n");
            }while (error);
        repetir = resposta == 's';
    }while (repetir);
    return 0;
}
