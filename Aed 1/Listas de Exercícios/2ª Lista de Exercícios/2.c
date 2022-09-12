#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Digite o numero: ");
    scanf("%i", &x);
    if (x % 2 == 0)
        printf("\nO numero %i e par", x);
    else
        printf("\nO numero %i e impar", x);
    return 0;
}
