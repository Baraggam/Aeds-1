#include <stdio.h>
#include <stdlib.h>

void apresentacao();
void escrever(float soma);
float soma(float a, float b);
float lerReal();
int main()
{
    apresentacao();
    float a = lerReal();
    float b = lerReal();
    float resultado = soma(a, b);
    escrever(resultado);
    return 0;
}

void apresentacao()
{
    printf("Esse programa ira somar dois numeros a sua escolha.\n");
}

void escrever(float soma)
{
    printf("\nO resultado da soma vale: %.2f.", soma);
}

float soma(float a, float b)
{
    float soma = a + b;
    return soma;
}

float lerReal()
{
    float x;
    printf("\nDigite um numero real: ");
    scanf("%f", &x);
    return x;
}
