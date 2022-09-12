#include <stdio.h>
#include <stdlib.h>
#define linhas 3
#define colunas 2

void apresentacao();
void escrever(int quantidade);
int encontrarValor(float a[][colunas], float chavePesquisa);
int main()
{
	apresentacao();
	float a[][colunas] = {{5, 5}, {5, 5}, {5, 5}};
	int correspondencias = encontrarValor(a, 5);
	escrever(correspondencias);
	return 0;
}

void apresentacao()
{
	printf("Esse programa ira mostrar quantas correspondencias ha em um arranjo com uma chave de pesquisa.\n");
}

void escrever(int quantidade)
{
	printf("\nForam encontradas %i correspondencias.", quantidade);
}

int encontrarValor(float a[][colunas], float chavePesquisa)
{
	int iguais = 0;
	for (int i = 0; i < linhas; i ++)
		for (int j = 0; j < colunas; j ++)
			if (a[i][j] == chavePesquisa)
				iguais ++;
	return iguais;
}
