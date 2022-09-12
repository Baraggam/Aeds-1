#include <stdio.h>
#include <stdlib.h>

int main()
{
    float raio = 1,
          pi = 3.14,
          area = pi*raio*raio;
    printf("A area de um circulo de raio %4.2f mede: %4.2f", raio, area);
    return 0;
}
