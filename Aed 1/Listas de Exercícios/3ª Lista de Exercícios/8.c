#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso,
          relativo;
    int planeta;
    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    printf("\nDescubra o seu peso em um desses planetas:\n\n[1] Mercurio\n[2] Venus\n[3] Marte\n[4] Jupiter\n[5] Saturno\n[6] Urano\n\nDigite o codigo do planeta desejado: ");
    scanf("%i", &planeta);
    if (planeta == 1){
        relativo = peso * 0.37;
        printf("\nO seu peso no planeta Mercurio equivale a: %.2fKg", relativo);}
    else if (planeta == 2){
        relativo = peso * 0.88;
        printf("\nO seu peso no planeta Venus equivale a: %.2fKg", relativo);}
    else if (planeta == 3){
        relativo = peso * 0.38;
        printf("\nO seu peso no planeta Marte equivale a: %.2fKg", relativo);}
    else if (planeta == 4){
        relativo = peso * 2.64;
        printf("\nO seu peso no planeta Jupiter equivale a: %.2fKg", relativo);}
    else if (planeta == 5){
        relativo = peso * 1.15;
        printf("\nO seu peso no planeta Saturno equivale a: %.2fKg", relativo);}
    else{
        relativo = peso * 1.17;
        printf("\nO seu peso no planeta Urano equivale a: %.2fKg", relativo);}
    return 0;
}
