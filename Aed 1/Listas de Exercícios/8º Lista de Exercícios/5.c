#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,
        maior,
        quantidade = 0,
        soma = 0;
    float media;
    printf("O programa ira informar a media dos valores lidos e o maior valor entre eles.\n");
    printf("\nDigite um numero natural (Digite um numero negativo para sair): ");
    scanf("%i", &x);
    maior = x;
    while (x > 0){
        soma += x;
        quantidade ++;
        if (x > maior)
            maior = x;
        printf("\nDigite um numero natural (Digite um numero negativo para sair): ");
        scanf("%i", &x);}
    media = (float)soma / (float)quantidade;
    printf("\nA media dos %i numero(s) digitados vale: %.2f e o maior numero entre eles vale: %i.", quantidade, media, maior);
    return 0;
}
