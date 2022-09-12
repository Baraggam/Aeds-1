#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int flag = 0;
    int x,
        maior,
        quantidade = 0,
        soma = 0;
    float media;
    printf("O programa ira informar a media dos valores lidos e o maior valor entre eles.\n");
    printf("\nDigite um numero natural (Digite 0 para sair): ");
    scanf("%i", &x);
    maior = x;
    while (x != flag){
        soma += x;
        quantidade ++;
        if (x > maior)
            maior = x;
        printf("\nDigite um numero natural (Digite 0 para sair): ");
        scanf("%i", &x);}
    media = (float)soma / (float)quantidade;
    printf("\nA media dos %i numero(s) digitados vale: %.2f e o maior numero entre eles vale: %i.", quantidade, media, maior);
    return 0;
}
