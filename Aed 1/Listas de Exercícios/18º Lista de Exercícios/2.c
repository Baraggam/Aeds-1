#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *teste;
    teste = fopen("exemplo.dat", "w");
    fprintf(teste, "22");
    fclose(teste);
    return 0;

}
