#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool error;
    int quantidade = 0;
    float salario,
          reajuste,
          copia,
          soma = 0,
          medio;
    const int flag = 0;
    printf("Esse programa ira realizar o reajuste de salarios.\n");
    do{
        printf("\nDigite o salario (digite 0 para sair): ");
        scanf("%f", &salario);
        error = salario < 0;
        if (error)
            printf("\nEntrada invalida. Digite novamente\n");
    }while (error);
    while (salario != flag){
        copia = salario;
        if (salario < 1000){
            salario *= 1.1;
            printf("\nO salario de R$%.2f teve um reajuste de 10%%", copia);}
        else if (salario >= 1000 && salario <= 2000){
            salario *= 1.08;
            printf("\nO salario de R$%.2f teve um reajuste de 8%%", copia);}
        else{
            salario *= 1.07;
            printf("\nO salario de R$%.2f teve um reajuste de 7%%", copia);}
        quantidade ++;
        soma += salario;
        reajuste = salario - copia;
        printf(" e aumentou para R$%.2f (aumento de R$%.2f).\n", salario, reajuste);
        do{
            printf("\nDigite o salario (digite 0 para sair): ");
            scanf("%f", &salario);
            error = salario < 0;
            if (error)
                printf("\nEntrada invalida. Digite novamente\n");
        }while (error);}
    medio = soma / quantidade;
    printf("\nO salario medio vale: R$%.2f.", medio);
    return 0;
}
