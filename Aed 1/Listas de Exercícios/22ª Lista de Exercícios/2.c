#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

void menu(int m[][100]);
int cadastrarRelacoes(int m[][100], int tam);
char lerResposta();
void relacoes(int m[][100], int tam);
void qtRelacoes(int m[][100], int tam);
void verificarAnomalias(int m[][100], int tam);
int main()
{
	printf("Esse programa ira fazer um grafo que demonstra relacoes de amizade.\n");
	int m[100][100];
	menu(m);
	printf("\nObrigado.");
	return 0;
}

void menu(int m[][100])
{
    int tam = 0,
	    opcao;
	printf("\n0 – Sair\n1 – Cadastrar as relacoes de amizades.\n2 – Pesquisar quais as relacoes de amizade de uma pessoa\n3 – Pesquisar o numero de relacoes de amizade de uma pessoa\n4 – Verificar se ha a seguinte anomalia: uma relacao de amizade de uma pessoa com ela mesma\nOpcao: ");
	scanf("%i", &opcao);
	const int flag = 0;
	while (opcao != flag){
		switch (opcao){
			case 1:
				tam = cadastrarRelacoes(m, tam); break;
			case 2:
				relacoes(m, tam); break;
			case 3:
				qtRelacoes(m, tam); break;
			case 4:
				verificarAnomalias(m, tam); break;
			default:
				printf("\nEntrada invalida. Digite novamente.\n");}
		printf("\n\n0 – Sair\n1 – Cadastrar as relacoes de amizades.\n2 – Pesquisar quais as relacoes de amizade de uma pessoa\n3 – Pesquisar o numero de relacoes de amizade de uma pessoa\n4 – Verificar se ha a seguinte anomalia: uma relacao de amizade de uma pessoa com ela mesma\nOpcao: ");
		scanf("%i", &opcao);}
}

int cadastrarRelacoes(int m[][100], int tam)//tam utilizado nesta funcao como a pessoa atual, fazendo assim com que essa funcao possa ser reutilizada varias vezes
{
	char resposta;
	printf("\nDeseja cadastrar a pessoa %i? [S/N]: ", tam);
	resposta = lerResposta();
	while (resposta == 's' && tam < 100){
		tam++;
		for (int n = tam - 1; n >= 0; n--){
			printf("\nA pessoa %i tem relacao de amizade com a pessoa %i? [S/N] ", tam, n);
			resposta = lerResposta();
			if (resposta == 's'){
				m[tam][n] = 1;//Gravando na linha da pessoa atual
				m[n][tam] = 1;}//Gravando na coluna da pessoa atual
			else{
				m[tam][n] = 0;
				m[n][tam] = 0;}}
		tam++;
		printf("\nDeseja cadastrar a pessoa %i? [S/N]: ", tam);
		resposta = lerResposta();}
	for (int n = 0; n < tam; n++)//Colocando 0 na relacao de uma pessoa consigo
		m[n][n] = 0;
    return tam;
}

char lerResposta()//poder sinalizar erro
{
	bool error;
	char x;
	do{
		//fflush(stdin);Comando nao funcionando como esperado
		scanf(" %c", &x);//Devido ao erro do ffllush, solução para evitar erros
		x = tolower(x);
		error = x != 's' && x != 'n';
		if (error)
			printf("\nEntrada invalida. Digite novamente. [S/N]: ");
	}while (error);
	return x;
}

void relacoes(int m[][100], int tam)
{
	int a[tam],//Criando um vetor para guardar todas as relacoes de uma pessoa
	    pessoa,
	    n = 0;//Usada para contar quantas pessoas, assim como para indicar qual a posicao no vetor a
	printf("\nDigite o numero da pessoa desejada: ");
	scanf("%i", &pessoa);
	if (pessoa >= 0 && pessoa < tam){//Garantindo que esse pessoa está cadastrada
		for (int i = 0; i < tam; i++)
			if (m[i][pessoa] == 1){
				a[n] = i;
				n++;}
		if (n > 0){
			printf("\nHa relacao(oes) de amizade com as seguinte(s) pessoa(s): ");
			for (int i = 0; i < n; i++)
				printf("%i - ", a[i]);}
		else
			printf("\nNao ha relacoes de amizade.");}
	else
		printf("\nEssa pessoa nao esta cadastrada.");
}

void qtRelacoes(int m[][100], int tam)
{
	int pessoa;
	printf("\nDigite o numero da pessoa desejada: ");
	scanf("%i", &pessoa);
	int quantidade = 0;
	if (pessoa >= 0 && pessoa < tam){//Garantindo que esse pessoa está cadastrada
		for (int i = 0; i < tam; i++)
			if (m[i][pessoa] == 1)
				quantidade++;
		printf("\nA pessoa %i possui %i relacao(oes) de amizade.", pessoa, quantidade);}
	else
		printf("\nEssa pessoa nao esta cadastrada.");
}

void verificarAnomalias(int m[][100], int tam)
{
	int a[tam],//Criando um vetor para guardar todas as pessoas com anomalias
	    n = 0;//Usada para contar quantas pessoas possuem anomalias, assim como para indicar qual a posicao no vetor a
	for (int i = 0; i < tam; i++)
		if (m[i][i] == 1){
			a[n] = i;
			n++;}
	if (n > 0){
		printf("\nHa anomalia(s) com a(s) seguinte(s) pessoa(s): ");
		for (int i = 0; i < n; i++)
			printf("%i - ", a[i]);}
	else
		printf("\nNao ha anomalias.");
}
