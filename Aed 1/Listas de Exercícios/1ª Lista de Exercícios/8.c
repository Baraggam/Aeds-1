#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base,
          altura;
    printf("Digite o valor da base do retangulo: ");
    scanf("%f", &base);
    printf("\nDigite o valor da altura do retangulo: ");
    scanf("%f", &altura);
    float area = base*altura;
    printf("\nA area do retangulo de base %4.2f e altura %4.2f mede: %4.2f", base, altura, area);
    return 0;
}
