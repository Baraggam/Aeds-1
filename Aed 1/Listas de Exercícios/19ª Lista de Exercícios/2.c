#include <stdio.h>
#include <stdlib.h>

void apresentacao();
void escrever(int quantidade);
int lerNotas(float notas[], int tam);
float mediaNotas(float notas[], int tam);
int acimaMedia(float notas[], int tam);
int main()
{
	apresentacao();
	float notas[1000];
	int tam = lerNotas(notas, 1000);
	int acima = acimaMedia(notas, tam);
	escrever(acima);
	return 0;
}

void apresentacao()
{
	printf("Esse programa ira mostrar quantos alunos obtiveram nota acima da media na turma.\n");
}

void escrever(int quantidade)
{
	printf("\nAluno(s) acima da media: %i.", quantidade);
}

int lerNotas(float notas[], int tam)
{
	float nota;
	int quantidade = 0;
	printf("\nDigite a nota do aluno 1 [0 - 100] (Digite -1 para sair): ");
	scanf("%f", &nota);
	while (!(nota < 0) && quantidade < tam){//flag
		notas[quantidade] = nota;
		quantidade ++;
		printf("\nDigite a nota do aluno %i [0 - 100] (Digite -1 para sair): ", quantidade + 1);//Apenas para mostrar quantas notas ja foram inseridas
		scanf("%f", &nota);}
	return quantidade;
}

float mediaNotas(float notas[], int tam)
{
	float media = 0,
	      soma = 0;
	for (int i = 0; i < tam; i ++)
		soma += notas[i];
	if (tam != 0)
		media = soma / (float)tam;
	return media;
}

int acimaMedia(float notas[], int tam)
{
	int acima = 0;
	float media = mediaNotas(notas, tam);
	for (int i = 0; i < tam; i ++){
		if (notas[i] > media)
			acima ++;}
	return acima;
}
