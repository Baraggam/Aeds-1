#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base = 3.5,
          altura = 2,
          perimetro = base*2+altura*2;
    printf("O perimetro de um retangulo na base %4.2f e com altura de %4.2f, mede: %4.2f", base, altura, perimetro);
    return 0;
}
