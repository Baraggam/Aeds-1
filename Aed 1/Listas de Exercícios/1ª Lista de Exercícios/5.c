#include <stdio.h>
#include <stdlib.h>

int main()
{
    float raio = 5,
          pi = 3.14,
          perimetro = 2*pi*raio;
    printf("O perimetro de um circulo de raio %4.2f mede: %4.2f", raio, perimetro);
    return 0;
}
