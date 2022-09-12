#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void apresentacao();
void escrever(int x, int resultado);
int fatorial(int numero);
int lerNatural();
int main()
{
    apresentacao();
    int numero = lerNatural();
    int resultado = fatorial(numero);
    escrever(numero, resultado);
    return 0;
}

void apresentacao()
{
    printf("Esse programa ira calcular o fatorial de um numero natural a sua escolha.\n");
}

void escrever(int numero, int resultado)
{
    printf("\nO fatorial de %i vale: %i.", numero, resultado);
}

int fatorial(int x)
{
    int fatorial = 0;
    if (x >= 0 && x % 1 == 0){
        fatorial = 1;
        for (int n = 1; n <= x; n ++)
            fatorial *= n;}
    else
        printf("\nEntrada invalida.\n");
    return fatorial;
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
