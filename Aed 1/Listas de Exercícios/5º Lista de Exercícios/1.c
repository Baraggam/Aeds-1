#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool erro;
    float base,
          resultado;
    int expoente,
        count = 1;
    printf("Esse programa ira calcular a potencia de um numero\n");
    printf("\nDigite um numero real para a base da potencia: ");
    scanf("%f", &base);
    do{
        printf("\nDigite um numero inteiro igual ou maior que 0 para o expoente da potencia: ");
        scanf("%i", &expoente);
        erro = expoente < 0;
        if (erro)
            printf("\nNumero invalido. Digite novamente.\n");}
    while (erro);
    resultado = base;
    if (expoente == 0)
        resultado = 1;
    else{
        while (count != expoente){
            resultado = base * resultado;
            count = count + 1;}}
    if (expoente == 0 && base == 0)
        printf("\nO resultado da potencia de base %.2f e expoente %i e considerada indefinida", base, expoente);
    else
        printf("\nO resultado da potencia de base %.2f e expoente %i vale: %.2f", base, expoente, resultado);
    return 0;
}
