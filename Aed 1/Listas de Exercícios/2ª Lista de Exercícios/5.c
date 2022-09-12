#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;
    printf("Digite um ano para sabermos se ele e bissexto: ");
    scanf("%i", &ano);
    if (ano % 400 == 0)
        printf("\nO ano %i e bissexto", ano);
    else if (ano % 4 == 0)
        if (ano % 100 == 0)
        printf("\nO ano %i nao e bissexto:", ano);
        else
        printf("\nO ano %i e bissexto", ano);
    else
        printf("\nO ano %i nao e bissexto", ano);
    return 0;
}
