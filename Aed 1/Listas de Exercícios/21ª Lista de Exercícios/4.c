#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define numLin 3
#define numCol 3

bool localizarChave(float m[][numCol], float chave);
int main()
{
	float m[][numCol] = {{1, 5, 10}, {1, 1, 15}, {1, 1, 1}};
	bool temChave = localizarChave(m, 6);
	if (temChave)
		printf("\nsim");
	else
		printf("\nnao");
	return 0;
}

bool localizarChave(float m[][numCol], float chave)
{
	bool temChave = false;
	int i = 0,
	    j = 0;
	while (!temChave && i < numLin){
		if (m[i][j] == chave)
			temChave = true;
		j ++;	
		if (j == numCol){
			i ++;
			j = 0;}}
	return temChave;
}
