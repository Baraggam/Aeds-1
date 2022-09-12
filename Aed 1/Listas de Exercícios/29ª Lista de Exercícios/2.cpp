/*
Será escrito na tela:
Alo mundo
ALo mundo 2
Instrucao try encerrada
*/

#include <iostream>

using namespace std;

int main(){
	try{
		cout << "\nAlo Mundo";
		if (false) throw (1);
		cout << "\nAlo Mundo 2";}
	catch (int n){
		cout << "\nExcecao " << n;}
	cout << "\nInstrucao try encerrada";
	return 0;}
