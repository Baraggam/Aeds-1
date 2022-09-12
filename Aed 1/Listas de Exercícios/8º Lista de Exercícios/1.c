#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    bool error;
    const char flag = 's';
    char time;
    int cruzeiro = 0,
        atletico = 0,
        outros = 0;
    printf("Esse programa ira mostrar o time com mais torcedores.\n");
    do{
        fflush(stdin);
        printf("\nQual o seu time?\n[C] Cruzeiro, [A] Atletico, [O] Outros, [S] Sair do programa: ");
        scanf("%c", &time);
        error = time != 'a' && time != 'c' && time != 'o' && time != 's';
        if (error)
            printf("\nEntrada invalida. Digite novamente.\n");
    }while (error);
    while (time != flag){
        time = tolower(time);
        if (time == 'c')
            cruzeiro ++;
        else if (time == 'a')
            atletico ++;
        else
            outros ++;
        do{
            fflush(stdin);
            printf("\nQual o seu time?\n[C] Cruzeiro, [A] Atletico, [O] Outros, [S] Sair do programa: ");
            scanf("%c", &time);
            error = time != 'a' && time != 'c' && time != 'o' && time != 's';
            if (error)
                printf("\nEntrada invalida. Digite novamente.\n");
        }while (error);}
    if (cruzeiro > atletico && cruzeiro > outros)
        printf("\nO time Cruzeiro tem a maior torcida.");
    else if (atletico > cruzeiro && atletico > outros)
        printf("\nO time Atletico tem a maior torcida.");
    else if (cruzeiro == atletico && cruzeiro > outros)
        printf("\nA torcida do Cruzeiro e do atletico tem a mesma quantidade de torcedores.");
    else
        printf("\nMais torcedores torcem para outros times.");
    return 0;
}
