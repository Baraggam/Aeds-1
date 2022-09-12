#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,
        maior,
        menor;
    printf("Esse programa ira dizer qual o maior numero e o maior numero  de dez valores lidos.\n");
    printf("\nDigite um numero: ");
    scanf("%i", &x);
    maior = menor = x;
    for (int n = 1; n <= 9; n ++){
        printf("\nDigite um numero: ");
        scanf("%i", &x);
        if (x > maior)
            maior = x;
        else if (x < menor)
            menor = x;}
    printf("\nMaior numero: %i\nMenor numero: %i", maior, menor);
    return 0;
}
