/*
Será escrito na tela:
Alo mundo
Mensagem da superclasse runtime_error
Mensagem do Catch
Instrucao try encerrada
*/

#include <iostream>
#include <stdexcept>

using namespace std;

class Excecao : public runtime_error{
	public :
		Excecao() : runtime_error("Mensagem da superclasse runtime_error"){}};

int main(){
	try{
		cout << "\nAlo Mundo\n";
		if (true) throw Excecao();
		cout << "\nAlo Mundo";}
	catch (Excecao excecao){
		cout << excecao.what();
		cout << "\nMensagem do Catch";}
	cout << "\nInstrucao try encerrada";
	return 0;}
