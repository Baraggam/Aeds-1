#include <stdio.h>
#include <stdlib.h>

void apresentacao();
void escrever(float maior);
float maior(float a, float b);
float lerReal();
int main()
{
    apresentacao();
    float a = lerReal();
    float b = lerReal();
    float resultado = maior(a, b);
    escrever(resultado);
    return 0;
}

void apresentacao()
{
    printf("Esse programa ira mostrar o maior valor entre dois numeros a sua escolha.\n");
}

void escrever(float maior)
{
    printf("\nO maior valor vale: %.2f.", maior);
}

float maior(float a, float b)
{
    float maior;
    if (a > b)
        maior = a;
    else
        maior = b;
    return maior;
}

float lerReal()
{
    float x;
    printf("\nDigite um numero real: ");
    scanf("%f", &x);
    return x;
}
