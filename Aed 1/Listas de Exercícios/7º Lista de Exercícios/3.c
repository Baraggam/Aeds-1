#include <stdio.h>
#include <stdlib.h>

int main()//Dessa vez eu não separei os termos. Foi difícil, mas eu vou me acostumar!!
{
    int n,
        numerador = 1,
        denominador = 100;
    float resultado;
    printf("Esse programa ira mostrar a sequencia: 1/100,  97/2, 3/94... A quantidade de termos esta a sua escolha.\n");
    printf("\nDigite o numero de termos desejado: ");
    scanf("%x", &n);
    printf("Sequencia: ");
    for (int count = 1; count <= n; count ++){
        if (count % 2 == 0)
            resultado = (float)denominador / (float)numerador;
        else
            resultado = (float)numerador / (float)denominador;
        numerador ++;
        denominador -= 3;
        printf("%.5f, ", resultado);}
    return 0;
}
