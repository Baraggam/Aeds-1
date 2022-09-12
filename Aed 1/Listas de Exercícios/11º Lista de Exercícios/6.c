#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void apresentacao();
void escrever(int numero, int divisores);
int divisores(int x);
int lerNatural();
int main()
{
    apresentacao();
    int numero = lerNatural();
    int resultado = divisores(numero);
    escrever(numero, resultado);
    return 0;
}

void apresentacao()
{
    printf("Esse programa ira verificar se um numero natural a sua escolha e primo ou nao.\n");
}

void escrever(int numero, int divisores)
{
    if (divisores == 1 || divisores == 2)
        printf("\nO numero %i e primo.", numero);
    else if (divisores > 2)
        printf("\nO numero %i nao e primo.", numero);
        else
            printf("\nEntrada invalida.\n");
}

int divisores(int x)
{
    int divisores = 0;
    if (x > 0 && x % 1 == 0){
        for (int n = 1; n <= x && divisores <= 2; n ++){
            if (x % n == 0)
                divisores ++;}}
    else
        printf("\nEntrada invalida.\n");
    return divisores;
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
