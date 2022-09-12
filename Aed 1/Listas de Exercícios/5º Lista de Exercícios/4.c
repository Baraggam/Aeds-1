#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool erro;
    int voto,
        chapa1 = 0,
        chapa2 = 0,
        nulo = 0,
        total;
    float percent1,
          percent2;
    printf("Esse programa ira mostrar os dados da eleicao do DA de ciencia da computacao.\n");
    do{
        do{
            printf("\n[0] Sair do programa - [1] Chapa 1 - [2] Chapa 2 - [3] Voto em branco ou nulo\n\nDigite o seu voto: ");
            scanf("%i", &voto);
            erro = voto < 0 || voto > 3;
            if (erro)
                printf("\nVoto invalido. Digite novamente.\n");}
        while (erro);
        switch (voto){
            case 0:
                break;
            case 1:
                chapa1 = chapa1 + 1; break;
            case 2:
                chapa2 = chapa2 + 1; break;
            case 3:
                nulo = nulo + 1; break;}}
    while (voto != 0);
    printf("\nContagem dos votos:\n\nChapa 1: %i\nChapa 2: %i\nVoto em branco ou nulo: %i", chapa1, chapa2, nulo);
    total = chapa1 + chapa2 + nulo;
    percent1 = (float)chapa1 * 100 / (float)total;
    percent2 = (float)chapa2 * 100 / (float)total;
    if (chapa1 > chapa2)
        printf("\n\nA chapa 1 ganhou com %i votos e isso corresponde a %.2f%% do total de votos.", chapa1, percent1);
    else if (chapa1 == chapa2)
        printf("\n\nA chapa 1 empatou com a chapa 2 com %i voto(s).", chapa1);
    else
        printf("\n\nA chapa 2 ganhou com %i votos e isso corresponde a %.2f%% do total de votos.", chapa2, percent2);
    return 0;
}
