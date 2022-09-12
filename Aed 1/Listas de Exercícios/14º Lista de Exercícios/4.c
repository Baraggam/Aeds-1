#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void apresentacao();
void decrescente(int inf, int sup);
int lerNatural();
int main()
{
    apresentacao();
    int n = 0;
    int m = lerNatural();
    decrescente(n, m);
    return 0;
}

void apresentacao()
{
    printf("Esse programa ira mostrar os numeros em ordem decrescente a partir de um valor positivo a sua escolha ate 0.\n");
}

void decrescente(int inf, int sup)
{
    if (inf <= sup){
        decrescente(inf + 1, sup);
        printf("%i - ", inf);}
}

int lerNatural()
{
    int x;
    bool error;
    do{
        printf("\nDigite um numero natural: ");
        scanf("%i", &x);
        error = x < 0;
        if (error)
            printf("\nEntrada invalida. Digite novamente.\n");
    }while (error);
    return x;
}
