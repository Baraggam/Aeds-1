#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *teste;
    teste = fopen("exemplo.dat", "a");
    fprintf(teste, "\n40\n45");
    fclose(teste);
    return 0;

}
