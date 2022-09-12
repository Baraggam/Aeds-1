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
    printf("Esse programa ira mostrar os numeros em ordem crescente de 1 a 10.\n\n");
}

void crescente(int x)
{
    if (x <= 10){
        printf("%i - ", x);
        crescente(x + 1);}
}
