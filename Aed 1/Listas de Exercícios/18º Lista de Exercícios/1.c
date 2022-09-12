#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *teste;
    teste = fopen("exemplo.dat", "w");
    fclose(teste);
    return 0;

}
