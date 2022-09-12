#include <stdio.h>
#include <stdlib.h>

void apresentacao();
void escrever(int negativos);
int quantidade(float A[], int tam);
int main()
{
    apresentacao();
    float A[] = {-2, -1, -1, -2};
    int negativos = quantidade(A, 4);
    escrever(negativos);
    return 0;
}

void apresentacao()
{
    printf("Esse programa ira mostrar quantos numeros negativos um arranjo possui.\n");
}

void escrever(int negativos)
{
    if (negativos > 0)
        printf("\nEsse arranjo possui %i numero(s) negativo(s).", negativos);
    else if (negativos == 0)
        printf("\nEsse arranjo nao possui numeros negativos.");
}

int quantidade(float A[], int tam)
{
    int negativos = 0;
    for (int i = 0; i < tam; i ++){
        if (A[i] < 0)
            negativos ++;}
    return negativos;
}
