#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n,
        divisiveis = 0,
        a1,
        razao,
        divisor;
    bool erro;
    char resposta;
    printf("Esse programa ira verificar quantos termos de uma PA sao divisiveis por um numero a sua escolha\n");
    do{
    printf("\nDigite o primeiro termo: ");
    scanf("%i", &a1);
    printf("\nDigite a razao: ");
    scanf("%i", &razao);
    do{
        printf("\nDigite o numero de termos [numero inteiro positivo maior que 0]: ");
        scanf("%i", &n);
        erro = n <= 0;
        if (erro)
            printf("\nNumero invalido. Digite novamente.\n");
    }while (erro);
    printf("\nDigite o numero divisor: ");
    scanf("%i", &divisor);
    for (int count = 1; count <= n; count++){
        if (a1 % divisor == 0)
            divisiveis++;
        a1 += razao;}
    printf("\n%i termos sao divisiveis por %i.\n", divisiveis, divisor);
    divisiveis = 0;
    do{
        fflush(stdin);
        printf("\nDeseja executar novamente? [S/N]: ");
        scanf("%c", &resposta);
        erro = tolower(resposta) != 's' && tolower(resposta) != 'n';
        if (erro)
            printf("\nResposta invalida. Digite novamente.\n");
        }while (erro);
    }while (resposta == 's');
    return 0;
}
