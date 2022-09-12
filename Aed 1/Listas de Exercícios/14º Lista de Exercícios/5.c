#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void apresentacao();
void escrever(int x);
int somatorio(int n, int m);
int lerReal();
int main()
{
    apresentacao();
    printf("\nInferior...");
    int n = lerReal();
    printf("\nSuperior...");
    int m = lerReal();
    int soma = somatorio(n, m);
    escrever(soma);
    return 0;
}

void apresentacao()
{
    printf("Esse programa ira mostrar a soma entre os inteiros entre dois valores a sua escolha.\n");
}

void escrever(int x)
{
    printf("\nO resultado do somatorio vale: %i.", x);
}

int somatorio(int n, int m)
{
    int soma;
    if (n < m)
        soma = n + somatorio(n + 1, m);
    else if (n == m)
        soma = m;
    return soma;
}

int lerReal()
{
    int x;
    printf("\nDigite um numero inteiro: ");
    scanf("%i", &x);
    return x;
}
