#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    printf("Esse programa ira mostrar em ordem decrescente os numeros inteiros de 1 a 10.\n");
    do{
        if (x == 10){ // Tenho toque e n�o conseguiria ver um "espa�o" e um "-" atoa se "printasse" todos igualmente.
            printf("\nOrdem decrescente: %i", x);
            x = x - 1;}
        else{
            printf(" - %i", x);
            x = x - 1;}}
    while (x != 0);
    return 0;
}
