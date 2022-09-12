#include <stdio.h>
#include <stdlib.h>
#define numCol 3

float mediaDiagonal (float m[][numCol]);
int main()
{
	float m[][numCol] = {{5, 1, 1}, {1, 10, 1}, {1, 1, 15}};
	float media = mediaDiagonal(m);
	printf("\n%.2f", media);
	return 0;
}

float mediaDiagonal (float m[][numCol])
{
	float soma = 0,
		 media = 0;
	for (int i = 0; i < numCol; i ++)
		soma += m[i][i];
	if (numCol > 0)
		media = soma / (float)numCol;
	return media;
}
