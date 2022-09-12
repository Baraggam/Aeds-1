#include <stdio.h>
#include <stdlib.h>

int main()
{
    int denominador = 1;
    float h = 0;
    printf("Esse programa ira calcular a soma da sequencia: 1/1, 1/3, 1/9, 1/27...\n");
    for (int n = 1; n <= 10; n ++){
        h += (float) 1 / (float) denominador;
        denominador *= 3;}
    printf("\nO resultado dessa soma com dez termos vale: %.2f.", h);
    return 0;
}
