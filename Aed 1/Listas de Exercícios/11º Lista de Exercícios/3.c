#include <stdio.h>
#include <stdlib.h>

void apresentacao();
void escrever(int numero);
int lerInt();
int main()
{
    apresentacao();
    int numero = lerInt();
    escrever(numero);
    return 0;
}

void apresentacao()
{
    printf("Esse programa ira mostrar se um numero inteiro a sua escolha e par ou impar.\n");
}

void escrever(int numero)
{
    if (numero % 2 == 1 || numero % 2 == -1)//Numeros negativos tambem podem ser pares ou impares.
        printf("\nEsse numero e impar.");
    else if (numero % 2 == 0)
        printf("\nEsse numero e par.");
        else
            printf("\nEu nao tenho ideia.\n");
}

int lerInt()
{
    int x;
    printf("\nDigite um numero inteiro: ");
    scanf("%i", &x);
    return x;
}
