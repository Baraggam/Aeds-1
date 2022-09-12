#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void apresentacao();
void escrever(float base, int expoente, float resultado);
float potencia(float base, int expoente);
float lerBase();
int lerExpoente();
int main()
{
    apresentacao();
    int base = lerBase();
    int expoente = lerExpoente();
    int resultado = potencia(base, expoente);
    escrever(base, expoente, resultado);
    return 0;
}

void apresentacao()
{
    printf("Esse programa ira calcular a potencia de uma base e expoente a sua escolha.\n");
}

void escrever(float base, int expoente, float resultado)
{
    if (base == 0 && expoente == 0)
        printf("\nO resultado de 0 elevado a 0 e indefinido.");
    else
        printf("\n%.2f elevado a %i vale: %.2f.", base, expoente, resultado);
}

float potencia(float base, int expoente)
{
    float potencia = 1;
    if (expoente >= 0){
        for (int n = 1; n <= expoente; n ++)
            potencia *= base;}
    else
        printf("\nEntrada invalida.\n");
    return potencia;
}

float lerBase()
{
    float base;
    printf("\nDigite a base: ");
    scanf("%f", &base);
    return base;
}

int lerExpoente()
{
    int expoente;
    bool error;
    do{
        printf("\nDigite o expoente: ");
        scanf("%i", &expoente);
        error = expoente < 0;
        if (error)
            printf("\nEntrada invalida. Digite novamente.\n");
    }while (error);
    return expoente;
}
