#include <stdio.h>
#include <stdlib.h>

const int tam = 6;

void leArranjo(int C[]);
void deslocaMaiorParaFinal();
void escreveArranjo(int A[]);
int main() {
     	int A[] = {6, 5, 4, 3, 2, 1};
	int B[] = {3, 1, 6, 4, 2, 5};
	int C[6];
	leArranjo(C);  // Preenche todo o arranjo com valores lidos
	deslocaMaiorParaFinal(A);   // Desloca o maior valor do arranjo para a última posição
	deslocaMaiorParaFinal(B);
	deslocaMaiorParaFinal(C);
	escreveArranjo(A);   // Escreve na tela todo o arranjo
	escreveArranjo(B);
	escreveArranjo(C);
	return 0;
}

void leArranjo(int C[])
{
    for (int i = 0; i < tam; i ++){
        printf("\nDigite o termo %i: ", i + 1);
        scanf("%i", &C[i]);}
}

void deslocaMaiorParaFinal(int A[])
{
    int maior = A[0],
        local = 0;
    for (int i = 1; i < tam; i ++){
        if (A[i] > maior){
            maior = A[i];
            local = i;}}
    int temp = A[tam - 1];
    A[tam - 1] = A[local];
    A[local] = temp;
}

void escreveArranjo(int A[])
{
    printf("\n");
    for (int i = 0; i < tam; i ++)
        printf(" %i", A[i]);
}
