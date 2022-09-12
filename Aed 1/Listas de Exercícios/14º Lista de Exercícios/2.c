#include <stdio.h>
#include <stdlib.h>

void apresentacao();
void crescente(int x);
int main()
{
    apresentacao();
    crescente(1);
    return 0;
}

void apresentacao()
{
    printf("Esse programa ira mostrar os numeros em ordem crescente e decrescente de 1 a 5.\n\n");
}

void crescente(int x)
{
    if (x <= 5){
        printf("%i - ", x);
        crescente(x + 1);
        printf("%i - ", x);}
}
