#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia;
    printf("Digite um numero: ");
    scanf("%i", &dia);
    if (dia == 1)
        printf("\nO dia %i da semana correspende a domingo.", dia);
    else if (dia == 2)
        printf("\nO dia %i da semana correspende a segunda-feira.", dia);
    else if (dia == 3)
        printf("\nO dia %i da semana correspende a terca-feira.", dia);
    else if (dia == 4)
        printf("\nO dia %i da semana correspende a quarta-feira.", dia);
    else if (dia == 5)
        printf("\nO dia %i da semana correspende a quinta-feira.", dia);
    else if (dia == 6)
        printf("\nO dia %i da semana correspende a sexta-feira.", dia);
    else
        printf("\nO dia %i da semana correspende a sabado.", dia);
    return 0;
}
