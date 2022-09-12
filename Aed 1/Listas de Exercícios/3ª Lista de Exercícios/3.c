#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,
        b,
        c;
    printf("Digite o primeiro numero: ");
    scanf("%i", &a);
    printf("\nDigite o segundo numero: ");
    scanf("%i", &b);
    printf("\nDigite o terceiro numero: ");
    scanf("%i", &c);
    if (a > b && a > c && b > c)
        printf("\nA ordem decrescente e: %i > %i > %i", a, b, c);
    else if (a > b && a > c && c > b)
        printf("\nA ordem decrescente e: %i > %i > %i", a, c, b);
    else if (b > a && b > c && a > c)
        printf("\nA ordem decrescente e: %i > %i > %i", b, a, c);
    else if (b > a && b > c && c > a)
        printf("\nA ordem decrescente e: %i > %i > %i", b, c, a);
    else if (c > a && c > b && a > b)
        printf("\nA ordem decrescente e: %i > %i > %i", c, a, b);
    else
        printf("\nA ordem decrescente e: %i > %i > %i", c, b, a);
    return 0;
}
