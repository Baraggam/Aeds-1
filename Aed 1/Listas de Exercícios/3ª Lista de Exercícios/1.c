#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,
          b,
          c;
    printf("Digite o primeiro numero da soma: ");
    scanf("%f", &a);
    printf("\nDigite o segundo numero da soma: ");
    scanf("%f", &b);
    printf("\nDigite o numero para comparar se a soma de %.2f + %.2f e maior: ", a, b);
    scanf("%f", &c);
    if (a + b > c)
        printf("\nA soma de %.2f + %.2f e maior que %.2f", a, b, c);
    else
        printf("\nA soma de %.2f + %.2f nao e maior que %.2f", a, b, c);
    return 0;
}
