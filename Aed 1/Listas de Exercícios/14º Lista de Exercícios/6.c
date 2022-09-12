#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void apresentacao();
void escrever(int x, int resposta);
int fatorial(int x);
int lerNatural();
int main()
{
    apresentacao();
    int x = lerNatural();
    int resposta = fatorial(x);
    escrever(x, resposta);
    return 0;
}

void apresentacao()
{
    printf("Esse programa ira mostrar o fatorial de um numero a sua escolha.\n");
}

void escrever(int x, int resposta)
{
    if (resposta > 0)
        printf("\nO fatorial de %i vale: %i.", x, resposta);
}

int fatorial(int x)
{
    if (x > 0)
        x *= fatorial(x - 1);
    else if (x == 0)
        x = 1;
        else
            printf("\nEntrada invalida. Digite novamente");
    return x;
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
