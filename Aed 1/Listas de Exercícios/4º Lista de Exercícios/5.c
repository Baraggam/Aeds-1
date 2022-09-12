#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool erro = true;
    float media;
    int x = 1,
        soma = 0,
        quantidade = 0;
    printf("Iremos calcular a idade media dos alunos que voce nos informar.\n");
    while (x != 0){
        while (erro){
            printf("\nDigite a idade de um aluno [1 - 150]. Digite 0 para receber o resultado: ");
            scanf("%i", &x);
            if (x == 0)
                break;
            else
                erro = x < 1 || x > 150;
            if (erro)
                printf("\nIdade invalida. Digite novamente.\n");}
        if (x == 0)
            break;
        else{
            soma = soma + x;
            quantidade = quantidade + 1;
            erro = true;}}
    media = (float)soma / (float)quantidade;
    printf("\nA media de idade dos %i alunos vale: %.2f.", quantidade, media);
    return 0;
}
