#include <iostream>
using namespace std;
main (){
	float cotacao, valdolar, valor, dinheiro;
	cout << "Iforme o valor: ";
	cin >> valor;
	cout << "cotacao do DOLAR: ";
	cin >> cotacao;
	cout << "Digite 1 se for valor em REAL ou 2 para DOLAR: ";
	cin >> dinheiro;
	if (dinheiro==1){
		valdolar = valor*cotacao;
	}else {
		valdolar = valor/cotacao;
	}
	cout << "valor: " << valdolar << "R$" ;
	
	
	
	
}