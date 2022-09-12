#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    float altura,
          peso;
    printf("Digite o seu sexo [M/F]: ");
    scanf("%c", &sexo);
    printf("\nDigite a sua altura: ");
    scanf("%f", &altura);
    if (sexo == 'm')
        peso = 72.7*altura-58;
    else
        peso = 62.1*altura-44.7;
    printf("\nO seu peso ideal tem valor de: %4.2f kg", peso);
    return 0;
}
