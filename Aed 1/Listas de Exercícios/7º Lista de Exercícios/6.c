#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Esse programa ira calcular o fatorial de um numero inteiro positivo.\n");
    do{
        int resultado = 1;
        printf("\nDigite um numero inteiro positivo (Digite um numero negativo para sair): ");
        scanf("%i", &x);
        if (x < 0)
            break;
        else{
            for (int n = 1; n <= x; n ++)
                resultado = n * resultado;}
        printf("\nO fatorial de %i vale: %i\n", x, resultado);
    }while (x >= 0);
    return 0;
}
