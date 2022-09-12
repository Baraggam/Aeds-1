#include <stdio.h>
#include <stdlib.h>

int main()
{
    float raio,
          pi = 3.14;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    float perimetro = 2*pi*raio;
    printf("\nO perimetro de um circulo de raio %4.2f mede: %4.2f", raio, perimetro);
    return 0;
}
