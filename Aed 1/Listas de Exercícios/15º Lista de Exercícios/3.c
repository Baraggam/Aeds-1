#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void apresentacao();
int lerDiscos();
void torre(int discos, int origem, int destino, int temporario);
int main()
{
    apresentacao();
    int discos = lerDiscos();
    torre(discos, 1, 3, 2);
    return 0;
}

void apresentacao()
{
    printf("Esse programa ira mostrar a ordem de execucao da torre de hanoi.\n");
}

int lerDiscos()
{
    int termos;
    bool error;
    do{
        printf("\nDigite o numero de discos: ");
        scanf("%i", &termos);
        error = termos <= 0;
        if (error)
            printf("\nEntrada invalida. Digite novamente.\n");
    }while (error);
    return termos;
}

void torre(int discos, int origem, int destino, int temporario)
{
    if (discos == 1)
        printf("\n%i => %i", origem, destino);
    else if (discos > 1){
        torre(discos - 1, origem, temporario, destino);
        printf("\n%i => %i", origem, destino);
        torre(discos - 1, temporario, destino, origem);}
}
