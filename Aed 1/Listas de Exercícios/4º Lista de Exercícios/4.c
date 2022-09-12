#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()//Posso ter estentido um pouco mais o código, eu só quis tentar diferenciar os números o máximo possível.
{
    int x = 1;
    bool erro = true,
         primeiro = true;
    printf("Esse programa ira mostrar em ordem decrescente os numeros inteiros de 1 ate o valor desejado.\n");
    while (x != 0){
        while (erro){
            printf("\nDigite um numero inteiro [1 - 10]: ");
            scanf("%i", &x);
            erro = x < 1 || x > 10;
            if (erro)
                printf("\nNumero invalido. Digite novamente.\n");}
        if (primeiro){
            printf("\nOrdem decrescente: %i", x);
            x = x - 1;
            primeiro = false;}
        else{
            printf(" - %i", x);
            x = x - 1;}}
    return 0;
}
