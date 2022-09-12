#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void apresentacao();
int lerTermos();
void fibonnaci(int termos, int atual, int anterior);
int main()
{
    apresentacao();
    int atual = 1,
        anterior = 0,
    termos = lerTermos();
    fibonnaci(termos, atual, anterior);
    return 0;
}

void apresentacao()
{
    printf("Esse programa ira mostrar a sequencia Fibonacci de maneira recursiva.\n");
}

int lerTermos()
{
    int termos;
    bool error;
    do{
        printf("\nDigite o numero de termos [numero natural maior que 0]: ");
        scanf("%i", &termos);
        error = termos <= 0;
        if (error)
            printf("\nEntrada invalida. Digite novamente.\n");
    }while (error);
    return termos;
}

void fibonnaci(int termos, int atual, int anterior)
{
    int copia = atual;
    if (atual == 1 && anterior == 0){
        printf("\nPrimeiros %i termos da Sequencia Fibonacci: %i, ", termos, atual);
        fibonnaci(termos - 1, atual + anterior, copia);}
    else if (termos != 0){
        printf("%i, ", atual);
        fibonnaci(termos - 1, atual + anterior, copia);}
}
