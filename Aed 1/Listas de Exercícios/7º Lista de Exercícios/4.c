#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    bool error,
         temalunos;//Garantindo que essa turma tenha pelo menos um aluno.
    char genero;
    int quantidade,
        mulheres = 0,
        homens = 0,
        adultos = 0,
        idade,
        maior,
        menor;
    printf("Esse programa ira mostrar o perfil de uma turma.\n");
    do{
        printf("\nDigite o numero de alunos: ");
        scanf("%i", &quantidade);
        error = quantidade < 0;
        if (error)
            printf("\nEntrada invalida! Digite novamente.\n");
    }while (error);
    temalunos = quantidade > 0;
    if (!temalunos)
        printf("\nNao ha alunos nessa turma");
    else{
        do{
            printf("\nDigite o genero do aluno 1 [M/F]: ");
            fflush(stdin);
            scanf("%c", &genero);
            genero = tolower(genero);
            error = genero != 'm' && genero != 'f';
            if (error)
                printf("\nEntrada invalida! Digite novamente.\n");
        }while (error);
        do{
            printf("\nDigite a idade do aluno 1 [0 - 100]: ");
            scanf("%i", &idade);
            error = idade < 0 || idade > 100;
            if (error)
                printf("\nEntrada invalida! Digite novamente.\n");
        }while (error);
        if (genero == 'f')
            mulheres ++;
        else
            homens ++;
        if (idade >= 18)
            adultos ++;
        maior = menor = idade;
        for (int n = 2; n <= quantidade; n ++){//Começando em 2 pois ja foi feita uma iteração antes do for
            do{
                printf("\nDigite o genero do aluno %i [M/F]: ", n);
                fflush(stdin);
                scanf("%c", &genero);
                genero = tolower(genero);
                error = genero != 'm' && genero != 'f';
                if (error)
                    printf("\nEntrada invalida! Digite novamente.\n");
            }while (error);
            do{
                printf("\nDigite a idade do aluno %i [0 - 100]: ", n);
                scanf("%i", &idade);
                error = idade < 0 || idade > 100;
                if (error)
                    printf("\nEntrada invalida! Digite novamente.\n");
            }while (error);
            if (genero == 'f')
                mulheres ++;
            else
                homens ++;
            if (idade > maior)
                maior = idade;
            else if (idade < menor)
                menor = idade;
            if (idade >= 18)
                adultos ++;}}
    if (temalunos){
        float homenspercent = (float)homens * 100 / quantidade,
        mulherespercent = (float)mulheres * 100 / quantidade,
        adultopercent = (float)adultos * 100 / quantidade;
        printf("\nPorcentagem de homens: %.2f\nPorcentagem de mulheres: %.2f\nPorcentagem de alunos adultos: %.2f\nAluno mais velho: %i anos\nAluno mais novo: %i anos", homenspercent, mulherespercent, adultopercent, maior, menor);}
    return 0;
}
