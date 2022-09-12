#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool ehPalind (char str[], int i);
int main()
{
	char str [] = "abba\0";
	bool saoIguais = ehPalind(str, 0);
	if (saoIguais)
		printf("\nEh Palindromo.");
	else
		printf("\nNao eh Palindromo.");
	return 0;
}

bool ehPalind (char str[], int i)
{
	int j = strlen(str) - 1 - i;//O valor de j pode ser definido pelo valor de i, fazendo inutil a passagem por paramentro
	bool saoIguais = str[i] == str[j];
	if (saoIguais && i <= j)
		saoIguais = ehPalind(str, i + 1);
	return saoIguais;
}
