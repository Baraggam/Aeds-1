#include <stdio.h>
#include <stdlib.h>

void apresentacao();
void escrever(int quantidade);
void lerNotas(char arquivo[]);
float mediaNotas(char arquivo[]);
int acimaMedia(char arquivo[]);
int main()
{
	apresentacao();
	char arquivo[] = "notas.dat";
	lerNotas(arquivo);
	int acima = acimaMedia(arquivo);
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

void lerNotas(char arquivo[])
{
	FILE *arq = fopen(arquivo, "w");
	float nota;
	int aluno = 1;
	printf("\nDigite a nota do aluno 1 [0 - 100] (Digite -1 para sair): ");
	scanf("%f", &nota);
	while (!(nota < 0)){//flag
		fprintf(arq, "%f\n", nota);
		aluno ++;
		printf("\nDigite a nota do aluno %i [0 - 100] (Digite -1 para sair): ", aluno);
		scanf("%f", &nota);}
	fclose(arq);
}

float mediaNotas(char arquivo[])
{
	FILE *arq = fopen(arquivo, "r");
	float media = 0;
	if (arq != NULL){
		float nota,
		soma = 0;
		int quantidade = 0;
		fscanf(arq, "%f", &nota);
		while (!feof(arq)){
			soma += nota;
			quantidade ++;
			fscanf(arq, "%f", &nota);}
		if (quantidade != 0)
			media = soma / (float)quantidade;
		fclose(arq);}
	else
		printf("\nNao ha arquivo.");
	return media;
}

int acimaMedia(char arquivo[])
{
	float media = mediaNotas(arquivo);
	FILE *arq = fopen(arquivo, "r");
	int acima = 0;
	if (arq != NULL){
		float nota;
		fscanf(arq, "%f", &nota);
		while (!feof(arq)){
			if (nota > media)
			acima ++;
			fscanf(arq, "%f", &nota);}
		fclose(arq);}
	else
		printf("\nNao ha arquivo.");
	return acima;
}
