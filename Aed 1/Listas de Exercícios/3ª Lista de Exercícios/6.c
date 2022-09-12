#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,
          b,
          nota;
    printf("Digite o resultado da primeira prova: ");
    scanf("%f", &a);
    printf("\nDigite o resultado da segunda prova: ");
    scanf("%f", &b);
    nota = a + b;
    if (nota >= 60)
        printf("\nO aluno esta aprovado com nota: %.2f.", nota);
    else if (nota < 40)
        printf("\nO aluno esta reprovado com nota: %.2f", nota);
    else
        printf("\nO aluno esta em reavaliacao com nota: %.2f", nota);
    return 0;
}
