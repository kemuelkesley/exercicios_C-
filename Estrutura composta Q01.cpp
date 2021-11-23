#include <iostream>

using namespace std;

main (){
	
/*1)Faça o algoritmo que leia um número inteiro (positivo ou negativo) e apresente o seu módulo.
Obs.: O módulo de um número significa que, não importando o número digitado na entrada (positivo ou
negativo), a saída sempre apresentará um número positivo.*/
	setlocale (LC_ALL, "portuguese");
	int numero, modulo;
	
	cout << "informe o numero: ";
	cin >> numero;
	if (numero>0){
		cout << numero << " positivo " << endl;
	}
	if (numero<0){
		modulo = numero*(-1);
		cout << modulo;
	}
	
	
}