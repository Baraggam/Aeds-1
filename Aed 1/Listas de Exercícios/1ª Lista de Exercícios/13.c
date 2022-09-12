#include <stdio.h>
#include <stdlib.h>

int main()
{
    float farenheit;
    printf("Digite a temperatura em Farenheit: ");
    scanf("%f", &farenheit);
    float celsius = 5/9.0*(farenheit-32);
    printf("\n%4.2f graus em Farenheit correspondem a %4.2f em Celsius.", farenheit, celsius);
    return 0;
}
