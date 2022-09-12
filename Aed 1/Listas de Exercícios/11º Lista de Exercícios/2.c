#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void apresentacao();
void escrever(float perimetro);
float perimetro(float lado);
float lerLado();
int main()
{
    apresentacao();
    float lado = lerLado();
    float resultado = perimetro(lado);
    escrever(resultado);
    return 0;
}

void apresentacao()
{
    printf("Esse programa ira mostrar o valor do perimetro de um quadrado a sua escolha.\n");
}

void escrever(float perimetro)
{
    printf("\nO perimetro do quadrado vale: %.2f.", perimetro);
}

float perimetro(float lado)
{
    float perimetro = 0;
    if (lado > 0)
        perimetro = 4 * lado;
    else
        printf("\nEntrada invalida.\n");
    return perimetro;
}

float lerLado()
{
    float lado;
    bool error;
    do{
        printf("\nDigite o valor do lado: ");
        scanf("%f", &lado);
        error = lado < 0;
        if (error)
            printf("\nEntrada invalida. Digite novamente.\n");
    }while (error);
    return lado;
}
