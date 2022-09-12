#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,
          y,
          maior;
    printf("Digite o primeiro numero: ");
    scanf("%f", &x);
    printf("\nDigite o segundo numero: ");
    scanf("%f", &y);
    if (x > y)
        maior = x;
    else
        maior = y;
    printf("\nO maior numero entre %4.2f e %4.2f vale: %4.2f", x, y, maior);
    return 0;
}
