#include <stdio.h>
#include <stdlib.h>

void apresentacao();
void escreverArranjo(int a[], int tam);
void trocar(int a[], int x, int y);
int main()
{
    apresentacao();
    int a[] = {0, 1, 2, 3, 4};
    printf("\nTransformando o arranjo:");
    escreverArranjo(a, 5);
    trocar(a, 2, 4);
    printf("\nTemos:");
    escreverArranjo(a, 5);
    return 0;
}

void apresentacao()
{
    printf("Esse programa ira trocar o dois elementos de um arranjo.\n");
}

void escreverArranjo(int a[], int tam)
{
    for (int i = 0; i < tam; i ++)
        printf(" %i", a[i]);
}

void trocar(int a[], int x, int y)
{
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}
