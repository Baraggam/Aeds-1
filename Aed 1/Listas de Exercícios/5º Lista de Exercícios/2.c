#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool erro;
    int x,
        resultado,
        count;
    printf("Esse programa ira calcular o fatorial de um numero inteiro positivo.\n");
    do{
        printf("\nDigite um numero inteiro positivo: ");
        scanf("%i", &x);
        erro = x < 0;
        if (erro)
            printf("\nNumero invalido. Digite novamente.\n");}
    while (erro);
    resultado = x;
    count = x;
    if (x == 0 || x == 1)
        resultado = 1;
    else{
        do{
            count = count - 1;
            resultado = count * resultado;}
        while (count != 1);}
    printf("\nO fatorial de %i vale: %i", x, resultado);
    return 0;
}
