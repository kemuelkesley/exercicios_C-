#include <iostream>
#include <string.h>
using namespace std;
main (){
	
	char N1[50], CPF[13], RG[14];
	int  Nas, anoAtual, calc, dados;
	
			
	cout << "PROGRAMA BASICO PARA CADASTRO." << endl;
	cout << "Informe seu nome sem espacos: ";
	cin >> N1;
	cout << endl;
	cout << "CPF e RG sem ponto (.) e virgula (,).....";
	cout << endl;
	cout << "Informe seu CPF: ";
	cin >> CPF;
	cout << endl;
	cout << "Informe seu RG: ";
	cin >> RG;
	cout << endl;
	cout << "Ano de nascimento: ";
	cin >> Nas;
	cout << endl;
	anoAtual = 2020;
	calc = (anoAtual-Nas);

	cout << endl;
	cout << "Confirme se suas informacoes estao corretas.";
	cout << endl;
	cout << "Nome: " << N1 << endl;
	cout << "CPF: " << CPF << endl;
	cout << "RG: " << RG << endl;
	cout << "Ano de Nascimento: " << Nas << endl;
	cout << "Se estao corretas digite 1-SIM  2 - NAO digite Nao:...";
	cin >> dados;
	cout << endl;
	if (dados == 1)
		cout << "Obrigado pelas informacoes" << endl;
	
		
		
	
	
}