#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define NUM_LINHAS 3
#define NUM_COLUNAS 3

float menorElemento(float m[][NUM_COLUNAS]);
int linMin(float m[][NUM_COLUNAS]);
float minMax(float m[][NUM_COLUNAS]);
int main()
{
	float m[][NUM_COLUNAS] = {{1, 2, 3}, {4, 5, 6}, {7, 0, 9}};
	float x = minMax(m);
	printf("\n%f", x);
	return 0;
}

float menorElemento(float m[][NUM_COLUNAS])
{
	float menor = m[0][0];
	for (int i = 0; i < NUM_LINHAS; i++)
		for (int j = 0; j < NUM_COLUNAS; j++)
			if (m[i][j] < menor)
				menor = m[i][j];
	return menor;
}

int linMin(float m[][NUM_COLUNAS])//Linha do menor valor
{
	bool encontrado = false;
	float chave = menorElemento(m);
	int i = 0,
	    j = 0,
	    linha = 0;
	while (!encontrado && i < NUM_LINHAS){
		if (m[i][j] == chave){
			linha = i;
			encontrado = true;}
		j++;
		if (j == NUM_COLUNAS){
			i++;
			j = 0;}}
	return linha;
}

float minMax(float m[][NUM_COLUNAS])
{
	int i = linMin(m);
	float maior = m[i][0];
	for (int j = 0; j < NUM_COLUNAS; j++)
		if (m[i][j] > maior)
			maior = m[i][j];
	return maior;
}
