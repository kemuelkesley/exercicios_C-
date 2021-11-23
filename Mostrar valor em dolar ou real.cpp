#include <iostream>
using namespace std;
#include <locale.h>
main (){
	
	float qtdvalor, cot, opcao;
	
	
	cout << "informe o valor para a conversao: ";
	cin >> qtdvalor;
	cout << "Converter para Real (1)." << endl;
	cout << "Converter para Dolar (2)." << endl;	
	cout << "Digite a opcao acima para a convercao: ";
	cin >> opcao;
	if (opcao == 1){
		cot = (qtdvalor * 5.23);
		cout << "R$" << cot << " Valor em Real." << endl;
	}else {
		cot = (qtdvalor / 5.23);
		cout << "US$" << cot << " Valor em Dolar." << endl;
	}
	

	
	
}
