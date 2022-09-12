#include <stdio.h>
#include <stdlib.h>

void apresentacao();
void maior(float a, float b, float *maiorValor);
void lerReal(float *x);
void escrever(float *maior);
int main()
{
    apresentacao();
    float *a = malloc(sizeof(float)),
          *b = malloc(sizeof(float)),
          *maiorValor = malloc(sizeof(float));
    lerReal(a);
    lerReal(b);
    maior(*a, *b, maiorValor);
    free(a);
    free(b);
    escrever(maiorValor);
    free(maiorValor);
    return 0;
}

void apresentacao()
{
    printf("Esse programa ira mostrar o maior numero real entre dois valores a sua escolha.\n");
}

void maior(float a, float b, float *maiorValor)
{
   *maiorValor = a;
   if(b>a)
        *maiorValor = b;
}

void lerReal(float *x)
{
    printf("\nDigite um valor real: ");
    scanf("%f", &*x);
}

void escrever(float *maiorValor)
{
    printf("\nO maior valor vale: %.2f.", *maiorValor);
}
