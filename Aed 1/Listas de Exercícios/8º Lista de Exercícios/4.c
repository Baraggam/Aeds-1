#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numerador = 10,
        denominador = 100;
    float h = 0;
    printf("Esse programa ira mostrar os 10 termos da sequencia: 10/100, 99/11, 12/98, 97/13...\n");
    for (int n = 1; n <= 10; n ++){
        if (n % 2 == 1)
            printf("%i/%i - ", numerador, denominador);
        else
            printf("%i/%i - ", denominador, numerador);
        numerador += 1;
        denominador -= 1;}
    return 0;
}
