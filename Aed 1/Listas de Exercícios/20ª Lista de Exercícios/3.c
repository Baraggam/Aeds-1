#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define linhas 3
#define colunas 2

void apresentacao();
void escrever(bool igual);
bool compararMatrizes(float a[][colunas], float b[][colunas]);
int main()
{
	apresentacao();
	float a[][colunas] = {{0, 5}, {5, 5}, {5, 5}};
	float b[][colunas] = {{5, 5}, {5, 5}, {5, 5}};
	bool iguais = compararMatrizes(a, b);
	escrever(iguais);
	return 0;
}

void apresentacao()
{
	printf("Esse programa ira mostrar se duas matrizes sao completamente identicas.\n");
}

void escrever(bool iguais)
{
	if (iguais)
		printf("\nAs matrizes sao iguais.");
	else
		printf("\nAs matrizes nao sao iguais.");
}

bool compararMatrizes(float a[][colunas], float b[][colunas])
{
	bool iguais = true;
	for (int i = 0; i < linhas; i ++)
		for (int j = 0; j < colunas; j ++)
			if (iguais && a[i][j] != b[i][j])
				iguais = false;
	return iguais;
}
