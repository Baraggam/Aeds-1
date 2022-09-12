#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 0,
        n;
    float primeiro,
          razao;
    printf("Iremos mostrar os n primeiros numeros de uma progressao aritmetica a sua escolha.\n\nDigite o primeiro valor: ");
    scanf("%f", &primeiro);
    printf("\nDigite a razao da progressao: ");
    scanf("%f", &razao);
    printf("\nDigite a quantidade de termos desejada: ");
    scanf("%i", &n);
    while (count != n){
        if (count == 0){
            printf("Progressao: %.2f", primeiro);
            primeiro = primeiro + razao;
            count = count + 1;}
        else{
            printf(", %.2f", primeiro);
            primeiro = primeiro + razao;
            count = count + 1;}}
    return 0;
}
