/*
Será escrito na tela:
Alo mundo
Excecao 1
Instrucao try encerrada
*/

#include <iostream>

using namespace std;

int main(){
	try{
		cout << "\nAlo Mundo";
		if (true) throw (1);
		cout << "\nAlo Mundo 2";}
	catch (int n){
		cout << "\nExcecao " << n;}
	cout << "\nInstrucao try encerrada";
	return 0;}
