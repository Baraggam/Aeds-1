/*
Como B será um valor lido, existem duas possibilidades para o que será escrito na tela.
Primeira possibilidade (B diferente de zero):
Divisão inteira
A= 
B= 
A/B= C (sendo C um valor gerado pela operacao de divisao)

Segunda possibilidade (B igual a zero):
Divisão inteira
A= 
B= 
Operacao nao definida: divisao por zero
*/

#include <iostream>
#include <stdexcept>

using namespace std;

class DivisaoPorZero : public runtime_error{
	public:
		DivisaoPorZero() : runtime_error("Operacao nao definida: divisao por zero"){}};

int main(){
	try{
		cout << "\nDivisão inteira";
		int a; cout << "\nA= ";
		cin >> a;
		int b; cout << "\nB= ";
		cin >> b;
		if (b == 0) throw DivisaoPorZero();
		int c = a/b;
		cout << "\nA/B= "<< c;}
	catch (DivisaoPorZero &ex){
		cout << ex.what();}
	return 0;}
