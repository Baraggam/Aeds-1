#include <stdio.h>
#include <stdlib.h>

void lerReal(float *x);
void comparar(float *x, float *y, float *maior);
void escrever(float *maior);
int main()
{
    printf("Esse programa ira mostrar o maior numero real entre dois valores a sua escolha.\n");
    float a,
          b,
          maior;
    lerReal(&a);
    lerReal(&b);
    comparar(&a, &b, &maior);
    escrever(&maior);
    return 0;
}

void lerReal(float *x)
{
    printf("\nDigite um valor real: ");
    scanf("%f", &*x);
}

void comparar(float *x, float *y, float *maior)
{
    if (*x > *y)
        *maior = *x;
    else
        *maior = *y;
}

void escrever(float *maior)
{
    printf("\nO maior valor vale: %.2f.", *maior);
}
