#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,
          b,
          c,
          D,
          x1,
          x2;
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("\nDigite o valor de B: ");
    scanf("%f", &b);
    printf("\nDigite o valor de C: ");
    scanf("%f", &c);
    D = pow(b, 2)- 4*a*c;
    if (D < 0)
        printf("Nao existe raiz");
    else
        {x1 = (-b + sqrt(D))/(2.0*a);
        x2 = (-b - sqrt(D))/(2.0*a);
        printf("\nAs duas raizes sao: %4.2f e %4.2f", x1, x2);}
        printf("\n%f", -b);
    return 0;
}
