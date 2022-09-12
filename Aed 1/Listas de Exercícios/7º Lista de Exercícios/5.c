#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool error;
    float base,
          resultado = 1;
    int expoente;
    printf("Esse programa ira calcular a potencia de um numero\n");
    printf("\nDigite um numero real para a base da potencia: ");
    scanf("%f", &base);
    do{
        printf("\nDigite um numero inteiro igual ou maior que 0 para o expoente da potencia: ");
        scanf("%i", &expoente);
        error = expoente < 0;
        if (error)
            printf("\nEntrada invalida. Digite novamente.\n");}
    while (error);
    for (int n = 1; n <= expoente; n ++)
        resultado = base * resultado;
    if (expoente == 0 && base == 0)
        printf("\nO resultado da potencia de base %.2f e expoente %i e considerada indefinida", base, expoente);
    else
        printf("\nO resultado da potencia de base %.2f e expoente %i vale: %.2f", base, expoente, resultado);
    return 0;
}
