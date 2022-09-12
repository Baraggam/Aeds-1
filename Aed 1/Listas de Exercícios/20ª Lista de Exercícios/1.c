#include <stdio.h>
#include <stdlib.h>
#define linhas 3
#define colunas 2

void apresentacao();
void escreverMatriz(float a[][colunas]);
void copiarMatrizes(float a[][colunas], float b[][colunas]);
int main()
{
	apresentacao();
	float a[][colunas] = {{5, 5}, {5, 5}, {4, 5}};
	float b[linhas][colunas];
	copiarMatrizes(a, b);
	escreverMatriz(b);
	return 0;
}

void apresentacao()
{
	printf("Esse programa ira copiar uma matriz em outra.\n");
}

void escreverMatriz(float a[][colunas])
{
	for (int i = 0; i < linhas; i ++){
		printf("\n");
		for (int j = 0; j < colunas; j ++)
			printf("%f\t", a[i][j]);}
}

void copiarMatrizes(float a[][colunas], float b[][colunas])
{
	for (int i = 0; i < linhas; i ++)
		for (int j = 0; j < colunas; j ++)
			b[i][j] = a[i][j];
}

/*Para que a funcionalidade nao funcione, basta que a matriz receptora dos dados seja menor do que a matriz com os dados originais, ou sejam de diferentes tipos de arranjos.*/
