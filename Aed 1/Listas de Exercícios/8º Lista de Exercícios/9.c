#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool error;
    int quantidade;
    float produto,
          abaixo = 0,
          acima = 0;
    printf("Esse programa ira mostar o produto mais caro entre uma faixa de precos.\n");
    do{
        printf("\nDigite a quantidade de produtos a serem analisados: ");
        scanf("%i",&quantidade);
        error = quantidade < 0;
        if (error)
            printf("\nEntrada invalida. Digite novamente.\n");
    }while (error);
    do{
        printf("\nDigite o valor do produto 1: ");
        scanf("%f", &produto);
        error = produto <= 0;
        if (error)
            printf("\nEntrada invalida. Digite novamente.\n");
    }while (error);
    if (produto < 2000)//maior valor abaixo de 2000
        abaixo = produto;
    else
        acima = produto;//maior valor acima de 2000
    for (int n = 2; n <= quantidade; n ++){
        do{
            printf("\nDigite o valor do produto %i: ", n);
            scanf("%f", &produto);
            error = produto <= 0;
            if (error)
                printf("\nEntrada invalida. Digite novamente.\n");
        }while (error);
        if (produto < 2000 && produto > abaixo)
            abaixo = produto;
        else if (produto > 2000 && produto > acima)
            acima = produto;}
    printf("O maior valor abaixo de 2 mil reais custa R$%.2f e o maior valor acima de 2 mil custa R$%.2f", abaixo, acima);
    return 0;
}
