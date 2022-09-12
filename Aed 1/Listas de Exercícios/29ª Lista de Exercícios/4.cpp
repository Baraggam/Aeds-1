/*
Será escrito na tela:
Alo mundo
Gerada uma excecao
Instrucao try encerrada
*/

#include <iostream>

using namespace std;

class Excecao{
	public:
		void mensagem(){
			cout << "Gerada uma excecao";}};

int main(){
	try{
		cout << "\nAlo Mundo\n";
		if (true) throw Excecao();
		cout << "\nAlo Mundo 2";}
	catch (Excecao excecao){
		excecao.mensagem();}
	cout << "\nInstrucao try encerrada";
	return 0;}
