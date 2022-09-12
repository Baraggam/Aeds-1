#include <stdio.h>
#include <stdlib.h>
#define numLin 3
#define numCol 3

int linhaMaiorNumero(float m[][numCol]);
int main()
{
	float m[][numCol] = {{5, 1, 1}, {1, 10, 1}, {1, 1, 15}};
	int linha = linhaMaiorNumero(m);
	printf("\n%i", linha);
	return 0;
}

int linhaMaiorNumero(float m[][numCol])
{
	int linha = 0;
	float maior = m[0][0];
	for (int i = 0; i < numLin; i ++)
		for (int j = 0; j < numCol; j ++)
			if (m[i][j] > maior)
				linha = i;
	return linha;
}
