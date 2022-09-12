#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,
          y,
          z,
          meio;
    printf("Digite o primeiro numero: ");
    scanf("%f", &x);
    printf("\nDigite o segundo numero: ");
    scanf("%f", &y);
    printf("\nDigite o terceiro numero: ");
    scanf("%f", &z);
    if (x > y)
        if (y > z)
            meio = y;
        else if (z > x)
            meio = x;
        else
            meio = z;
    else if (y > x)
        if (x > z)
            meio = x;
        else if (z > y)
            meio = y;
        else
            meio = z;
    printf("\nO segundo maior numero entre %4.2f, %4.2f e %4.2f vale: %4.2f", x, y, z, meio);
    return 0;
}
