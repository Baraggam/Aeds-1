#include <stdio.h>
#include <stdlib.h>

void apresentacao();
void escreverArranjo(int a[], int tam);
void trocar(int a[], int tam);
int main()
{
    apresentacao();
    int a[] = {0, 1, 2, 3, 4};
    printf("\nTransformando o arranjo:");
    escreverArranjo(a, 5);
    trocar(a, 5);
    printf("\nTemos:");
    escreverArranjo(a, 5);
    return 0;
}

void apresentacao()
{
    printf("Esse programa ira trocar o primeiro elemento de um arranjo pelo ultimo.\n");
}

void escreverArranjo(int a[], int tam)
{
    for (int i = 0; i < tam; i ++)
        printf(" %i", a[i]);
}

void trocar(int a[], int tam)
{
    int temp = a[0];
    a[0] = a[tam - 1];
    a[tam - 1] = temp;
}
