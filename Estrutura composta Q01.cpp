#include <iostream>

using namespace std;

main (){
	
/*1)Fa�a o algoritmo que leia um n�mero inteiro (positivo ou negativo) e apresente o seu m�dulo.
Obs.: O m�dulo de um n�mero significa que, n�o importando o n�mero digitado na entrada (positivo ou
negativo), a sa�da sempre apresentar� um n�mero positivo.*/
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