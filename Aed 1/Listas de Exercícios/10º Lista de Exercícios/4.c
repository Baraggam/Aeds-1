#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void apresentacao();
void escrever(int dias);
int dias(int idade);
int lerIdade();
int main()
{
    apresentacao();
    int idade = lerIdade();
    int resultado = dias(idade);
    escrever(resultado);
    return 0;
}

void apresentacao()
{
    printf("Esse programa ira calcular quantos dias aproximadamente voce ja viveu.\n");
}

void escrever(int dias)
{
    printf("\nVoce ja viveu aproximadamente %i dias.", dias);
}

int dias(int idade)
{
    int dias = idade * 365;
    return dias;
}

int lerIdade()
{
    bool error;
    int idade;
    do{
        printf("\nDigite a sua idade [0 - 100]: ");
        scanf("%i", &idade);
        error = idade < 0;
        if (error)
            printf("\nEntrada invalida. Digite novamente.\n");
    }while (error);
    return idade;
}
