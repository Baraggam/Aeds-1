#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int tam;

void apresentacao();
void escrever(int acima);
void criarArranjo(int A[]);
int lerIdade();
int idadeAcima(int A[]);
float media(int A[]);
int soma(int A[]);
int main()
{
    apresentacao();
    int A[10000];//Tentei muito tempo um jeito de criar um array sem limite pre estabelecido. Falhei miseravelmente!
    criarArranjo(A);
    int acima = idadeAcima(A);
    escrever(acima);
    return 0;
}

void apresentacao()
{
    printf("Esse programa ira mostar quantos alunos estao acima da media de idade da sala.\\n");
}

void escrever(int acima)
{
    printf("\nExiste(m) %i aluno(s) com idade acima da media.", acima);
}

void criarArranjo(int A[])
{
    const int flag = 0;
    int i = 0,
        x = lerIdade();
    while (x != flag){
        A[i] = x;
        i ++;
        tam ++;
        x = lerIdade();}
}

int lerIdade()
{
    int x;
    bool error;
    do{
        printf("\nDigite a idade do aluno 1 [0 - 150]: ");
        scanf("%i", &x);
        error = x < 0 || x > 150;
        if (error)
            printf("\nEntrada invalida. Digite novamente.\n");
    }while (error);
    return x;
}

int idadeAcima(int A[])
{
    int acima = 0;
    for (int i = 0; i < tam; i ++){
        if (A[i] > media(A))
            acima ++;}
    return acima;
}

float media(int A[])
{
    float med = (float)soma(A)/(float)tam;
    return med;
}

int soma(int A[])
{
    int soma = 0;
    for (int i = 0; i < tam; i ++)
        soma += A[i];
    return soma;
}
