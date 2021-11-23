#include <iostream>
using namespace std;
main (){
	// usando IF e ESLSe.
	
	float D, R, valor, Dolar, Cot, opc;
	int i;
	
	i=1;
	while (i != 2){
	cout << "======================================================" << endl;
	cout << "      Conversor de Moeda [Real e Dolar] Ver: 1.0 " << endl;	
	cout << "======================================================" << endl;
	cout << endl;
	cout << "Para Real  [ 1 ]:" << endl;
	cout << "Para Dolar [ 2 ]:" << endl;
	cout << endl;
	cout << "Informe a opcao: ";
	cin >> opc;
	
	if (opc == 1){
		cout << "Informe o valor R$: ";
		cin >> valor;
		Cot = 5.21;
		D = (valor*Cot);
		cout << "Valor em Real R$:" << D << endl;
		
	}else {
		cout << "Informe o valor US$: ";
		cin >> valor;
		Cot = 5.21;
		D = (valor/Cot);
		cout << "Valor em Real US$:" << D << endl;
		
				
	}
	
	}
	
	
	
	
	
}