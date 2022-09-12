#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define numLin 3
#define numCol 3

bool compararIgualdade(float m[][numCol]);
int main()
{
	float m[][numCol] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
	bool saoIguais = compararIgualdade(m);
	if (saoIguais)
		printf("\nsim");
	else
		printf("\nnao");
	return 0;
}

bool compararIgualdade(float m[][numCol])
{
	bool saoIguais = true;
	int i = numLin - 1,//ultima linha
	    j = 0;
	while (saoIguais && j < numCol){
		if (!(m[0][j] == m[i][j]))
			saoIguais = false;
		j ++;}
	return saoIguais;
}
