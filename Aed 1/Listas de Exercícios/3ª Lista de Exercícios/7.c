#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float altura,
          peso,
          imc;
    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);
    printf("\nDigite o seu peso em kilos: ");
    scanf("%f", &peso);
    imc = peso / pow(altura, 2);
    if (imc < 16)
        printf("\nO seu IMC vale: %.2f e e considerado: Magreza Grave", imc);
    else if (imc >= 16 && imc < 17)
        printf("\nO seu IMC vale: %.2f e e considerado: Magreza moderada", imc);
    else if (imc >= 17 && imc < 18.5)
        printf("\nO seu IMC vale: %.2f e e considerado: Magreza leve", imc);
    else if (imc >= 18.5 && imc < 25)
        printf("\nO seu IMC vale: %.2f e e considerado: Saudavel", imc);
    else if (imc >= 25 && imc < 30)
        printf("\nO seu IMC vale: %.2f e e considerado: Sobrepeso grave", imc);
    else if (imc >= 30 && imc < 35)
        printf("\nO seu IMC vale: %.2f e e considerado: Obesidade Grau I", imc);
    else if (imc >= 35 && imc < 40)
        printf("\nO seu IMC vale: %.2f e e considerado: Obesidade Grau II (Severa)", imc);
    else
        printf("\nO seu IMC vale: %.2f e e considerado: Oberisade Grau III (Morbida)", imc);
    return 0;
}
