#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool error;
    int atual = 1,
        anterior = 0,
        termos,
        copia;
    printf("Esse programa ira mostrar a sequencia Fibonacci.\n");
    do{
        printf("\nDigite o numero de termos [numero inteiro positivo maior que 0]: ");
        scanf("%i", &termos);
        error = termos <= 0;
        if (error)
            printf("\nEntrada invalida. Digite novamente.\n");
    }while (error);
    printf("\nPrimeiros %i termos da Sequencia Fibonacci: %i, ", termos, atual);
    for (int n = 2; n <= termos; n ++){
        copia = atual;
        atual += anterior;
        anterior = copia;
        printf("%i, ", atual);}
    return 0;
}
