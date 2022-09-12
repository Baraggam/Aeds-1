#include <stdio.h>
#include <stdlib.h>

float lerReal();
void comparar(float *x, float *y, float *z, float *segMaior);
void escrever(float maior);
int main()
{
    printf("Esse programa ira mostrar o segundo maior numero real entre tres valores a sua escolha.\n");
    float a = lerReal(),
          b = lerReal(),
          c = lerReal(),
          segMaior;
    comparar(&a, &b, &c, &segMaior);
    escrever(segMaior);
    return 0;
}

float lerReal()
{
    float x;
    printf("\nDigite um valor real: ");
    scanf("%f", &x);
    return x;
}

void comparar(float *a, float *b, float *c, float *segMaior)
{
    if (*a > *b && *b > *c)
        *segMaior = *b;
    if (*a > *c && *c > *b)
        *segMaior = *c;
    if (*b > *a && *a > *c)
        *segMaior = *a;
    if (*b > *c && *c > *a)
        *segMaior = *c;
    if (*c > *a && *a > *b)
        *segMaior = *a;
    if (*c > *b && *b > *a)
        *segMaior = *b;

}

void escrever(float segMaior)
{
    printf("\nO segundo maior valor vale: %.2f.", segMaior);
}
