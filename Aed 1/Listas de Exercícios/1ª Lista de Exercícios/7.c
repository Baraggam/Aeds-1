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
    float perimetro = base*2+altura*2;
    printf("\nO perimetro do retangulo de base %4.2f e altura %4.2f mede: %4.2f", base, altura, perimetro);
    return 0;
}
