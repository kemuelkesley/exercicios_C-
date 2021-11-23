#include <iostream>
using namespace std;
main (){
	
	int  anonascimento, anoatual, hab;
	float idade;
	
	cout << "informe o ano atual: ";
	cin >> anoatual;
	cout << "informe seu ano de nascimento: ";
	cin >> anonascimento;
	idade = anoatual-anonascimento;
	cout << idade << " ANOS de idade" << endl;
	cout << (idade * 365) << " Dias...." << endl;
	cout << (idade * 12) << " Meses...." << endl;
	if (idade >= 16){
		cout << "voce tem idade para votar" << endl;
	}else{
		cout << "Voce nao tem idade para votar" << endl;
	}if (idade >=18){
		cout << "voce tem idade para tirar a CNH" << endl;
	}else{
		cout << "voce nao tem idade para tirar a CNH" << endl;
	}
		
	
	
	
	
	
}
