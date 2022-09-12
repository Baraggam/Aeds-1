#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,
        denominador = 100;
    float h = 0;
    printf("Esse programa ira realizar a operacao: H = 1/100 + 1/97 + 1/94... A quantidade de termos esta a sua escolha.\n");
    printf("\nDigite o numero de termos desejado: ");
    scanf("%x", &n);
    for (int count = 1; count <= n; count ++){
        h += (float)1 / (float)denominador;
        denominador -= 3;}
    printf("H vale: %.5f.", h);
    return 0;
}
