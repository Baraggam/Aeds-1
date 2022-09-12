#include <stdio.h>
#include <stdlib.h>
#define numLin 3
#define numCol 3

float somaColuna(float m[][numCol], int j);
int main()
{
	float m[][numCol] = {{1, 5, 10}, {1, 1, 15}, {1, 1, 1}};
	float maior = somaColuna(m, 2);
	printf("\n%.2f", maior);
	return 0;
}

float somaColuna(float m[][numCol], int j)
{
	float soma = 0;
	for (int i = 0; i < numLin; i ++)
		soma += m[i][j];
	return soma;
}
