#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

class Agenda{
	private:
		char nome[30];
		int dia,
		    mes;

	public:
		void setNome(char nome[]){
			strcpy(this->nome, nome);}

		void setDia(int dia){
			if (dia > 0)
				this->dia = dia;
			else
				this->dia = 0;}

		void setMes(int mes){
			if (dia > 0)
				this->mes = mes;
			else
				this->mes = 0;}

		char *getNome(){
			return this->nome;}

		int getDia(){
			int dia = 0;
			if (this->dia > 0)
				dia = this->dia;
			else
				dia = 0;
			return dia;}

		int getMes(){
			int mes = 0;
			if (this->mes > 0)
				mes = this->mes;
			else
				mes = 0;
			return mes;}

		void escreverPessoa(char nome[], int dia, int mes){
			setNome(nome);
			setDia(dia);
			setMes(mes);}

		void lerPessoa(){
			char *nome = getNome();
			int dia = getDia();
			int mes = getMes();
			printf("\n%s faz aniversario no dia %i do mes %i.\n", nome, dia, mes);}};

int const max = 100;
int tam = 0;

void menu(Agenda agenda[max]);
void cadastrarAniversario(Agenda agenda[max]);
int lerData(const char parametro[], const char texto[]);
void pesquisarAniversario(Agenda agenda[max]);
void escreverAniversario(Agenda agenda[max], int mes);

int main(){
	Agenda agenda[max];
	menu(agenda);
	return 0;}

void menu(Agenda agenda[max]){
	int opcao;
	printf("\n0 – Sair do programa\n1 – Cadastrar uma pessoa\n2 – Pesquisar por aniversariantes do mês\nOpcao: ");
	scanf("%i", &opcao);
	while (opcao != 0){
		switch (opcao){
			case 1:
				cadastrarAniversario(agenda); break;
			case 2:
				pesquisarAniversario(agenda); break;
			default:
				printf("\nOpcao invalida. Digite novamente.");}
		printf("\n0 – Sair do programa\n1 – Cadastrar uma pessoa\n2 – Pesquisar por aniversariantes do mês\nOpcao: ");
		scanf("%i", &opcao);}
	printf("\nObrigado por usar o programa!");}

void cadastrarAniversario(Agenda agenda[max]){
	if (tam < max){
		char nome[30];
		printf("\nDigite o nome do aniversariante: ");
		scanf("%s", nome);
		int dia = lerData("dia", "Dia do aniversario: ");
		int mes = lerData("mes", "Mes do aniversario: ");
		agenda[tam].escreverPessoa(nome, dia, mes);
		tam++;}
	else
		printf("\nSua agenda está cheia.");}

int lerData(const char parametro[], const char texto[]){
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

void pesquisarAniversario(Agenda agenda[max]){
	int mes = lerData("mes", "Digite o mes do aniversario para a listagem: ");
	escreverAniversario(agenda, mes);}

void escreverAniversario(Agenda agenda[max], int mes){
	bool temAniversario = false;
	for (int i = 0; i < tam; i++)
		if (mes == agenda[i].getMes()){
			agenda[i].lerPessoa();
			temAniversario = true;}
	if (!temAniversario)
		printf("\nNenhum aniversario encontrado no mes %i.", mes);}
