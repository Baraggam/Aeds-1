#include <iostream>
#include <string>

using namespace std;

class Pessoa{
	private:
		static int quant;
		string nome;
		string CPF;

	public:
		Pessoa(){
			quant++;}

		~Pessoa(){
			quant--;}

		void setNome(string nome){
			this->nome = nome;}

		void setCPF(string CPF){
			this->CPF = CPF;}

		static int getquant(){
			return quant;}

		string getNome(){
			return this->nome;}

		string getCPF(){
			return this->CPF;}};

class Agenda : public Pessoa{
	private:
		static int quant;
		int dia,
		    mes;

	public:
		Agenda(){
			quant++;}

		~Agenda(){
			quant--;}

		void setDia(int dia){
			this->dia = dia;}

		void setMes(int mes){
			this->mes = mes;}

		static int getquant(){
			return quant;}

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

		void escreverPessoa(string nome, string CPF, int dia, int mes){
			setNome(nome);
			setCPF(CPF);
			setDia(dia);
			setMes(mes);}

		void lerPessoa(){
			string nome = getNome();
			string CPF = getCPF();
			int dia = getDia();
			int mes = getMes();
			cout <<"\n"<<nome<<", de CPF: "<<CPF<<", faz aniversario no dia "<<dia<<" do mes "<<mes<<".\n";}};
			
int Pessoa::quant = 0;
int Agenda::quant = 0;
int const MAX = 100;

void menu(Agenda *agenda[]);
void cadastrarAniversario(Agenda *agenda[]);
int lerData(string parametro, string texto);
void pesquisarAniversario(Agenda *agenda[]);
void escreverAniversario(Agenda *agenda[], int mes);

int main(){
	Agenda *agenda[MAX];
	menu(agenda);
	return 0;}

void menu(Agenda *agenda[]){
	int opcao;
	cout <<"\n0 – Sair do programa\n1 – Cadastrar uma pessoa\n2 – Pesquisar por aniversariantes do mês\nOpcao: ";
	cin >> opcao;
	while (opcao != 0){
		switch (opcao){
			case 1:
				cadastrarAniversario(agenda); break;
			case 2:
				pesquisarAniversario(agenda); break;
			default:
				cout <<"\nOpcao invalida. Digite novamente.";}
		cout <<"\n0 – Sair do programa\n1 – Cadastrar uma pessoa\n2 – Pesquisar por aniversariantes do mês\nOpcao: ";
		cin >> opcao;}
	cout <<"\nObrigado por usar o programa!";}

void cadastrarAniversario(Agenda *agenda[]){
	if (Agenda::getquant() <= MAX){
		agenda[Agenda::getquant() - 1] = new Agenda;
		string nome;
		string CPF;
		cout <<"\nDigite o nome do aniversariante: ";
		cin >> nome;
		cout <<"\nDigite o CPF do aniversariante: ";
		cin >> CPF;
		int dia = lerData("dia", "Dia do aniversario: ");
		int mes = lerData("mes", "Mes do aniversario: ");
		agenda[Agenda::getquant() - 1]->escreverPessoa(nome, CPF, dia, mes);}
	else
		cout <<"\nSua agenda está cheia.";}

int lerData(string parametro, string texto){
	bool error;
	int x;
	do{
		cout <<"\n"<<texto;
		cin >> x;
		if (parametro == "dia")
			error = x < 1 || x > 31;
		else if (parametro == "mes")
			error = x < 1 || x > 12;
		if (error)
			cout <<"\nEntrada invalida. Digite novamente.\n";
	}while (error);
	return x;}

void pesquisarAniversario(Agenda *agenda[]){
	int mes = lerData("mes", "Digite o mes do aniversario para a listagem: ");
	escreverAniversario(agenda, mes);}

void escreverAniversario(Agenda *agenda[], int mes){
	bool temAniversario = false;
	for (int i = 0; i < Agenda::getquant(); i++)
		if (mes == agenda[i]->getMes()){
			agenda[i]->lerPessoa();
			temAniversario = true;}
	if (!temAniversario)
		cout <<"\nNenhum aniversario encontrado no mes "<<mes;}
