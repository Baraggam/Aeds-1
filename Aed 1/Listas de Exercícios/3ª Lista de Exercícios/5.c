#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mes;
    printf("Digite o numero de um mes: ");
    scanf("%i", &mes);
    if (mes == 2)
        printf("\nO mes %i possui 28 dias;", mes);
    else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        printf("\nO mes %i possui 31 dias;", mes);
    else
        printf("\nO mes %i possui 30 dias;", mes);
    return 0;
}
