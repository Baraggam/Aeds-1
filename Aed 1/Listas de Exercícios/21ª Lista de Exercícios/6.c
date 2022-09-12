#include <stdio.h>
#include <stdlib.h>
#define numLin 3
#define numCol 3

float maiorAcimaDiagonal(float m[][numCol]);
int main()
{
	float m[][numCol] = {{1, 5, 10}, {1, 1, 15}, {1, 1, 1}};
	float maior = maiorAcimaDiagonal(m);
	printf("\n%.2f", maior);
	return 0;
}

float maiorAcimaDiagonal(float m[][numCol])
{
	int i = 0,
	    j = 1;
	float maior = m[i][j];
	while (i < numLin - 1){
		if (m[i][j] > maior)
			maior = m[i][j];
		j ++;
		if (j == numCol){
			i ++;
			j = i + 1;}}
	return maior;
}
