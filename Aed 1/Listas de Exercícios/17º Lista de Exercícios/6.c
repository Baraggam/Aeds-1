#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void apresentacao();
int lerTermos();
void fibonacci(int A[], int tam);
void escreveArranjo(int A[], int tam);
int main()
{
    apresentacao();
    int tam = lerTermos();
    int A[tam];
    fibonacci(A, tam);
    escreveArranjo(A, tam);
    return 0;
}

void apresentacao()
{
    printf("Esse programa ira mostrar n numeros da serio fibonacci.\n");
}

int lerTermos()
{
    int x;
    bool error;
    do{
        printf("\nDigite a quantidade de termos: ");
        scanf("%i", &x);
        error = x < 0;
        if (error)
            printf("\nEntrada invalida. Digite novamente.\n");
    }while (error);
    return x;
}

void fibonacci(int A[], int tam)
{
    if (tam > 0){
        A[0] = 1;
        if (tam > 1)
            A[1] = 1;
        for (int i = 2; i < tam; i ++)
            A[i] = A[i - 1] + A[i - 2];}
}

void escreveArranjo(int A[], int tam)
{
    printf("\n");
    for (int i = 0; i < tam; i ++)
        printf("%i - ", A[i]);
}
