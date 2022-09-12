#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int const max = 100;
int tam = 0;
typedef struct{
	char nome[30];
	int dia,
	    mes;} aniversario;

void menu(aniversario aniversarios[max]);
int cadastrarAniversario(aniversario aniversarios[max]);
int lerData(char parametro[], char texto[]);
void pesquisarAniversario(aniversario aniversarios[max]);
void escreverAniversario(aniversario aniversarios[max], int mes);
int main()
{
	aniversario aniversarios[max];
	menu(aniversarios);
	return 0;
}

void menu(aniversario aniversarios[max])
{
	int opcao;
	printf("\n0 – Sair do programa\n1 – Cadastrar uma pessoa\n2 – Pesquisar por aniversariantes do mês\nOpcao: ");
	scanf("%i", &opcao);
	while (opcao != 0){
		switch (opcao){
		case 0:
			printf("\nObrigado por usar o programa!"); break;
		case 1:
			cadastrarAniversario(aniversarios); break;
		case 2:
			pesquisarAniversario(aniversarios); break;
		default:
			printf("\nOpcao invalida. Digite novamente.");}
		printf("\n0 – Sair do programa\n1 – Cadastrar uma pessoa\n2 – Pesquisar por aniversariantes do mês\nOpcao: ");
		scanf("%i", &opcao);}
}

int cadastrarAniversario(aniversario aniversarios[max])
{
	if (tam < max){
		printf("\nDigite o nome do aniversariante: ");
		scanf("%s", aniversarios[tam].nome);
		aniversarios[tam].dia = lerData("dia", "Dia do aniversario: ");
		aniversarios[tam].mes = lerData("mes", "Mes do aniversario: ");
		tam++;}
	else
		printf("\nSua agenda está cheia.");
}

int lerData(char parametro[], char texto[])
{
	bool error;
	int x;
	do{
		printf("\n%s", texto);
		scanf("%i", &x);
		if (parametro == "dia")
			error = x < 1 || x > 31;
		else if (parametro == "mes")
			error = x < 1 || x > 12;
		if (error)
			printf("\nEntrada invalida. Digite novamente.\n");
	}while (error);
	return x;
}

void pesquisarAniversario(aniversario aniversarios[max])
{
	int mes = lerData("mes", "Digite o mes do aniversario para a listagem: ");
	escreverAniversario(aniversarios, mes);
}

void escreverAniversario(aniversario aniversarios[max], int mes)
{
	bool temAniversario = false;
	for (int i = 0; i < tam; i++)
		if (mes == aniversarios[i].mes){
			printf("\n%s faz aniversario no dia %i do mes %i.\n", aniversarios[i].nome, aniversarios[i].dia, aniversarios[i].mes);
			temAniversario = true;}
	if (!temAniversario)
		printf("\nNenhum aniversario encontrado no mes %i.", mes);
}
