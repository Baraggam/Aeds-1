#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    char resposta = 's';
    int ano;
    bool erro;
    printf("Esse programa ira mostrar se o ano digitado e ou nao bissexto.\n");
    while (resposta == 's'){
        printf("\nDigite um ano para sabermos se ele e bissexto: ");
        scanf("%i", &ano);
        if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))
            printf("\nO ano %i e bissexto", ano);
        else
            printf("\nO ano %i nao e bissexto:", ano);
        setbuf(stdin,NULL);
        erro = true;
        while (erro){
            printf("\n\nDeseja analisar outro ano? [S/N]: ");
            scanf("%c", &resposta);
            resposta = tolower(resposta);
            if (resposta == 's' || resposta == 'n')
                erro = false;}}
    return 0;
}
