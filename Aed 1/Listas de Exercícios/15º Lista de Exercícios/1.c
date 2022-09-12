#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void apresentecao();
void escrever(float base, int expoente, float resultado);
float potenciacao(float base, int expoente);
float lerBase();
int lerExpoente();
int main()
{
    apresentecao();
    float base = lerBase();
    int expoente = lerExpoente();
    float resultado = potenciacao(base, expoente);
    escrever(base, expoente, resultado);
    return 0;
}

void apresentecao()
{
    printf("Esse programa ira calcular a potenciacao de forma recursiva.\n");
}

void escrever(float base, int expoente, float resultado)
{
    if (base == 0 && expoente == 0)
        printf("\nO valor de 0 elevado a 0 nao e definido.");
    else
        printf("\n%.2f elevado a %i vale: %.5f.", base, expoente, resultado);
}

float lerBase()
{
    float x;
    printf("\nDigite um numero real: ");
    scanf("%f", &x);
    return x;
}

int lerExpoente()
{
    int x;
    printf("\nDigite o expoente: ");
    scanf("%i", &x);
    return x;
}

float potenciacao(float base, int expoente)
{
    float potencia = 1;
    bool expNegativo = expoente < 0;
    if (expoente < 0)
        expoente *= -1;//Considerando que eu não possa usar o comando de modulo.
    if (base != 0 || expoente != 0){//Garantindo que não será 0 elevado a 0.
        if (expoente == 1)
            potencia = base;
        else
            potencia *= base * potenciacao(base, expoente - 1);}
    if (expNegativo)
        potencia = 1 / potencia;//Potenciação com números negativos.
    return potencia;
}
