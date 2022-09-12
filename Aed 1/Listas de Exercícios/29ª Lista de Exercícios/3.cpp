/*
Será escrito na tela:
Alo mundo
Excecao lancada
Instrucao try encerrada
*/

#include <iostream>

using namespace std;

class Excecao {};

int main(){
	try{
		cout << "\nAlo Mundo\n";
		if (true) throw Excecao();
		cout << "\nAlo Mundo 2";}
	catch (Excecao excecao){
		cout << "\nExcecao lancada";}
	cout << "\nInstrucao try encerrada";
	return 0;}
