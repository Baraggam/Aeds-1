#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int const max = 100;
int tam = 0;
struct Aniversario{
	char nome[30];
	int dia,
	    mes;
	struct Aniversario *prox;};
typedef struct Aniversario Aniversario;

void menu(Aniversario *nodo);
void cadastrarAniversario(Aniversario *nodo);
int lerData(char parametro[], char texto[]);
void pesquisarAniversario(Aniversario *nodo);
void escreverAniversario(Aniversario *nodo, int mes);
int main(){
	Aniversario inicio;
	menu(&inicio);
	return 0;}

void menu(Aniversario *inicio){
	int opcao;
	bool maisDeUm = false;
	Aniversario *nodo = inicio;
	printf("\n0 – Sair do programa\n1 – Cadastrar uma pessoa\n2 – Pesquisar por aniversariantes do mês\nOpcao: ");
	scanf("%i", &opcao);
	while (opcao != 0){
		switch (opcao){
			case 1:
				if(maisDeUm){
					nodo->prox = malloc(sizeof(Aniversario));
					nodo = nodo->prox;}
				cadastrarAniversario(nodo);
				maisDeUm = true; break;
			case 2:
				pesquisarAniversario(inicio); break;
			default:
				printf("\nOpcao invalida. Digite novamente.");}
		printf("\n0 – Sair do programa\n1 – Cadastrar uma pessoa\n2 – Pesquisar por aniversariantes do mês\nOpcao: ");
		scanf("%i", &opcao);}
	printf("\nObrigado por usar o programa!");}

void cadastrarAniversario(Aniversario *nodo){
	if (tam < max){
		printf("\nDigite o nome do aniversariante: ");
		scanf("%s", nodo->nome);
		nodo->dia = lerData("dia", "Dia do aniversario: ");
		nodo->mes = lerData("mes", "Mes do aniversario: ");
		nodo->prox = NULL;
		tam++;}
	else
		printf("\nSua agenda está cheia.");}

int lerData(char parametro[], char texto[]){
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
	return x;}

void pesquisarAniversario(Aniversario *inicio){
	int mes = lerData("mes", "Digite o mes do aniversario para a listagem: ");
	escreverAniversario(inicio, mes);}

void escreverAniversario(Aniversario *inicio, int mes){
	bool temAniversario = false;
	Aniversario *nodo = inicio;
	while(nodo != NULL){
		if (mes == nodo->mes){
			printf("\n%s faz aniversario no dia %i do mes %i.\n", nodo->nome, nodo->dia, nodo->mes);
			temAniversario = true;}
		nodo = nodo->prox;}
	if (!temAniversario)
		printf("\nNenhum aniversario encontrado no mes %i.", mes);}
