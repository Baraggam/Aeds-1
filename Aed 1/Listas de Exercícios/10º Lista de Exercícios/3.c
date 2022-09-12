#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

void apresentacao();
void escrever(float resultado);
float pesoIdeal(char genero, float altura);
float lerGenero();
float lerAltura();
int main()
{
    apresentacao();
    char genero = lerGenero();
    float altura = lerAltura();
    float resultado = pesoIdeal(genero, altura);
    escrever(resultado);
    return 0;
}

void apresentacao()
{
    printf("Esse programa ira calcular o seu peso ideal.\n");
}

void escrever(float pesoIdeal)
{
    printf("\nO seu peso ideal vale: %.2f Kg.", pesoIdeal);
}

float pesoIdeal(char genero, float altura)
{
    float pesoIdeal;
    if (genero == 'm')
        pesoIdeal = 72.7 * altura - 58;
    else if (genero == 'f')
        pesoIdeal = 62.1 * altura - 44.7;
        else
            printf("\nEntrada invalida.\n");
    return pesoIdeal;
}

float lerGenero()
{
    char genero;
    bool error;
    do{
        fflush(stdin);
        printf("\nDigite o seu genero [M/F]: ");
        scanf("%c", &genero);
        genero = tolower(genero);
        error = genero != 'm' && genero != 'f';
        if (error)
            printf("\nEntrada invalida. Digite novamente\n");
    }while (error);
    return genero;
}

float lerAltura()
{
    float altura;
    bool error;
    do{
        printf("\nDigite a sua altura: ");
        scanf("%f", &altura);
        error = altura <= 0;
        if (error)
            printf("\nEntrada invalida. Digite novamente\n");
    }while (error);
    return altura;
}
