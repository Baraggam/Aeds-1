#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void apresentacao();
void crescente(int inf, int sup);
int lerNatural();
int main()
{
    apresentacao();
    int inf = lerNatural();
    int sup = lerNatural();
    crescente(inf, sup);
    return 0;
}

void apresentacao()
{
    printf("Esse programa ira mostrar os numeros em ordem crescente e decrescente entre dois numeros a sua escolha.\n");
}

void crescente(int inf, int sup)
{
    if (inf <= sup){
        printf("%i - ", inf);
        crescente(inf + 1, sup);
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
