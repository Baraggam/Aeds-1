#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool ehPalind (char str[]);
int main()
{
	char str [] = "abba\0";
	bool saoIguais = ehPalind(str);
	if (saoIguais)
		printf("\nEh Palindromo.");
	else
		printf("\nNao eh Palindromo.");
	return 0;
}

bool ehPalind (char str[])
{
	bool saoIguais = true;
	int i = 0,
	    j = strlen(str) - 1;
	while (saoIguais && i <= j){
		saoIguais = str[i] == str[j];
		i++;
		j--;}
	return saoIguais;
}
