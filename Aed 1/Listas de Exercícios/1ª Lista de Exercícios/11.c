#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura;
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    float peso = 72.7*altura-58;
    printf("\nO seu peso ideal tem valor de: %4.2f kg", peso);
    return 0;
}
