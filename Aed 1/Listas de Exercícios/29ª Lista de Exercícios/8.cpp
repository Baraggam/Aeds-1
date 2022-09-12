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
Erro na linha 28
*/

#include <iostream>
#include <stdexcept>

using namespace std;
class DivisaoPorZero : public runtime_error{
	public:
		DivisaoPorZero() : runtime_error("\nOperacao nao definida: divisao por zero"){}
		DivisaoPorZero(int n) : runtime_error("\nOperacao nao definida: divisao por zero"){
			cout << "\nErro na linha " << n;}};

int divisaoInteira(int a, int b){
	if (b == 0) throw DivisaoPorZero(__LINE__);
	return a/b;}

int main(){
	try{
		cout << "\nDivisão inteira";
		int a;
		cout << "\nA= ";
		cin >> a;
		int b;
		cout << "\nB= ";
		cin >> b;
		cout << "\nA/B= "<< divisaoInteira(a, b);}
	catch (DivisaoPorZero &ex){
		cout <<ex.what();}
	return 0;}
