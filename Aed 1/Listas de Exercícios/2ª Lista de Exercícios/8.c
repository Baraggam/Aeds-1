#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,
          y,
          z,
          maior;
    printf("Digite o primeiro numero: ");
    scanf("%f", &x);
    printf("\nDigite o segundo numero: ");
    scanf("%f", &y);
    printf("\nDigite o terceiro numero: ");
    scanf("%f", &z);
    if (x > y)
        if (x > z)
            maior = x;
        else
            maior = z;
    else if (y > x)
        if (y > z)
            maior = y;
    printf("\nO maior numero entre %4.2f, %4.2f e %4.2f vale: %4.2f", x, y, z, maior);
    return 0;
}
