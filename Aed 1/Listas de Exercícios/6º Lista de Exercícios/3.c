#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,
        resultado,
        count;
    printf("Esse programa ira calcular o fatorial de um numero inteiro positivo.\n");
    do{
        printf("\nDigite um numero inteiro positivo (Digite um numero negativo para sair): ");
        scanf("%i", &x);
        resultado = count = x;
        if (x < 0)
            break;
        if (x == 0 || x == 1)
            resultado = 1;
        else if (x > 1){
            do{
                count = count - 1;
                resultado = count * resultado;
            }while (count != 1);}
        printf("\nO fatorial de %i vale: %i\n", x, resultado);
    }while (x >= 0);
    return 0;
}
