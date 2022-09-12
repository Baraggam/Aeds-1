#include <stdio.h>
#include <stdlib.h>
#define numLin 3
#define numCol 3

float mediaAcimaDiagonal(float m[][numCol]);
int main()
{
	float m[][numCol] = {{1, 5, 10}, {1, 1, 15}, {1, 1, 1}};
	float media = mediaAcimaDiagonal(m);
	printf("\n%.2f", media);
	return 0;
}

float mediaAcimaDiagonal(float m[][numCol])
{
	int quantidade = 0,
	    i = 0,
	    j = 1;
	float soma = 0,
		 media = 0;
	while (i < numLin - 1){
		soma += m[i][j];
		j ++;
		quantidade ++;
		if (j == numCol){
			i ++;
			j = i + 1;}}
	if (numCol > 0)
		media = soma / (float)quantidade;
	return media;
}
