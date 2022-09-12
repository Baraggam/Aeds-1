#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,
          b,
          c;
    printf("Digite o valor do primeiro lado: ");
    scanf("%f", &a);
    printf("\nDigite o valor do segundo lado: ");
    scanf("%f", &b);
    printf("\nDigite o valor do terceiro lado: ");
    scanf("%f", &c);
    if (a+ b >= c)
        if (a + c >= b)
            if (b + c >= a)
                if (a == b)
                    if (b == c)
                        printf("\nEsse triangulo e equilatero");
                    else
                        printf("\nEsse e um triangulo isosceles");
                else if (b == c)
                    printf("\nEsse e um triangulo isosceles");
                else if (a == c)
                    printf("\nEsse e um triangulo isosceles");
                else
                    printf("\nEsse e um triangulo escaleno");
            else
                printf("\nEsse nao e um triangulo valido");
        else
            printf("\nEsse nao e um triangulo valido");
    else
        printf("\nEsse nao e um triangulo valido");
    return 0;
}
