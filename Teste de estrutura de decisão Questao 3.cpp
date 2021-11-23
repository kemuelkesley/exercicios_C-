#include <iostream>

using namespace std;

main (){
	int Qparcelas;
	float Vcompra, Vdesconto;
	
	cout << "valor da compra: ";
	cin >> Vcompra;
	cout << endl;
	cout << "Dgite 1 compra a vista." << endl;
	cout << endl;
	cout << "Escolha sua opcao se for dividir coloque o N de parcelas: ";
	cin >> Qparcelas;	
	cout << endl;
	if (Qparcelas==1){
		cout << "Valor de compra a vista: " << Vcompra << "R$" << endl;
		Vdesconto = (Vcompra*15)/100;
		cout << "Valor do desconto: " << Vdesconto << "R$" << endl;
		cout << "Total da compra: " << (Vcompra-Vdesconto) << "R$" << endl;
	}else {
		cout << "Compra dividida: " << endl;
		cout << "Valor total da compra: " << Vcompra << "R$" << endl;
		cout << "numero de parcelas: " << Qparcelas << "x" << endl;
		cout << "Valor de cada parcela: " << Vcompra/Qparcelas << "R$" << endl;
		   	 
	}
	cin.get();
	cin.get();
	
	
}