#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    printf("Esse programa ira mostrar a amplitude dos valores a sua escolha.\n");
    bool erro;
    char resposta;
    int x,
        maior,
        menor,
        amplitude;
    do{
        do{
            printf("\nDigite um numero inteiro positivo (digite 0 para sair): ");
            scanf("%i", &x);
            erro = x < 0;
            if (erro)
                printf("\nNumero invalido. Digite novamente.\n");
        }while (erro);
        if (x == 0){
            printf("\nNenhum valor informado.");
            break;}
        else
            maior = menor = x;
            do{
                do{
                    printf("\nDigite um numero inteiro positivo (digite 0 para sair): ");
                    scanf("%i", &x);
                    erro = x < 0;
                    if (erro)
                        printf("\nNumero invalido. Digite novamente.\n");
                }while (erro);
                if (x != 0){
                    if (x > maior)
                        maior = x;
                    else if (x < menor)
                        menor = x;}
            }while (x != 0);
            amplitude = maior - menor;
            printf("\nA amplitude do maior numero: %i e do menor numero: %i vale: %i.\n", maior, menor, amplitude);
            do{
                fflush(stdin);
                printf("\nDeseja executar novamente? [S/N]: ");
                scanf("%c", &resposta);
                resposta = tolower(resposta);
                erro = resposta != 's' && resposta != 'n';
                if (erro)
                    printf("\nResposta invalida. Digite novamente.\n");
            }while (erro);
    }while (resposta == 's');
    return 0;
}
