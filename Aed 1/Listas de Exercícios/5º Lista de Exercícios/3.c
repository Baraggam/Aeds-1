#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool erro;
    int quantidade,
        count = 1;
    float nota,
          media,
          soma = 0,
          maior,
          menor;
    printf("Esse programa ira informar, com base na nota, se o aluno foi aprovado ou nao, a media da turma, a maior nota e a menor nota.\n");
    do{
        printf("\nQuantos alunos essa turma possui?: ");
        scanf("%i", &quantidade);
        erro = quantidade <= 0;
        if (erro)
            printf("\nQuantidade invalida. Digite novamente.\n");}
    while (erro);
    do{
        do{
            printf("\nDigite a nota do aluno %i: ", count);
            scanf("%f", &nota);
            erro = nota < 0 || nota > 100;
            if (erro)
                printf("\nNota invalido. Digite novamente.\n");}
        while (erro);
        if (nota >= 60)
            printf("\nO aluno %i esta aprovado.\n", count);
        else
            printf("\nO aluno %i esta reprovado.\n", count);
        soma = soma + nota;
        if (count == 1){
            maior = nota;
            menor = nota;}
        else{
            if (nota > maior)
                maior = nota;
            if (nota < menor)
                menor = nota;}
        count = count + 1;}
    while (count <= quantidade);
    media = (float)soma / (float)quantidade;
    printf("\nA media da turma vale: %.2f, a maior nota vale: %.2f e a menor nota vale: %.2f.", media, maior, menor);
    return 0;
}
