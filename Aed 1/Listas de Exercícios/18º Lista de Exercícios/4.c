#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *teste;
    teste = fopen("exemplo.dat", "r");
    int idade;
    while (!feof(teste)){
        fscanf(teste, "%i", &idade);
        printf("Idade: %i\n", idade);}
    fclose(teste);
    return 0;
}
