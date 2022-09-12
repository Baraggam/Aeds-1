#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void apresentacao();
void escrever(float resultado);
float area(float base, float altura);
float lerBase();
float lerAltura();
int main()
{
    apresentacao();
    float base = lerBase();
    float altura = lerAltura();
    float resultado = area(base, altura);
    escrever(resultado);
    return 0;
}

void apresentacao()
{
    printf("Esse programa ira calcular a area de um retangulo a sua escolha.\n");
}

void escrever(float area)
{
    printf("\nA area desse retangulo vale: %.2f.", area);
}

float area(float base, float altura)
{
    float area = (base * altura) / 2;
    return area;
}

float lerBase()
{
    float base;
    bool error;
    do{
        printf("\nDigite o valor da base: ");
        scanf("%f", &base);
        error = base <= 0;
        if (error)
            printf("\nEntrada invalida. Digite novamente\n");
    }while (error);
    return base;
}

float lerAltura()
{
    float altura;
    bool error;
    do{
        printf("\nDigite o valor da altura: ");
        scanf("%f", &altura);
        error = altura <= 0;
        if (error)
            printf("\nEntrada invalida. Digite novamente\n");
    }while (error);
    return altura;
}
