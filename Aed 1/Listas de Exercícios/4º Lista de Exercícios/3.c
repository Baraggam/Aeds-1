#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    printf("Esse programa ira mostrar em ordem decrescente os numeros inteiros de 1 a 10.\n");
    while (x != 0){
        if (x == 10){ //Como no exemplo anterior, tenho toque e não conseguiria ver um "espaço" e um "-" atoa se "printasse" todos igualmente.
            printf("\nOrdem decrescente: %i", x);
            x = x - 1;}
        else{
            printf(" - %i", x);
            x = x - 1;}}
    return 0;
}
