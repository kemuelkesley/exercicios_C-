#include <iostream>
#include <locale.h>
using namespace std;
main (){

	// programa para salario, imposto e se tem um boa remunera��o ou n�o.


	setlocale(LC_ALL, "Portuguese");
	float salario, por1, por2, por3, aumento1, aumento2, aumento3, aumento4;
	int opc;
	
	cout << "MENU DE OP��ES:";
	cout << endl;
	cout << "1 - Imposto" << endl;
	cout << "2 - Novo sal�rio" << endl;
	cout << "3 - Classifica��o" << endl;
	cout << endl;
	cout << "Escolha a op��o desejada (1), (2) ou (3): ";
	cin >> opc; 
	if (opc==1){
		cout << "Informe o sal�rio R$: ";
		cin >> salario;
		if (salario < 500){
			por1 = (salario * 5)/100;
			cout << por1 << "%";
						
		}
		if (salario > 500 && salario <= 850){
			por2 = (salario * 10)/100;
			cout << por2 << "%";
			
		}
		if (salario > 850.00){
			por3 = (salario * 15)/100;
			cout << por3;
		}
		
	}
	if (opc==2){
		cout << "Informe o salario R$: ";
		cin >> salario;
		if (salario > 1500){
			aumento1 = (salario + 25);
			cout << "Novo sal�rio de R$ " << aumento1;						
		}
		if (salario >= 750 && salario <= 1500){
			aumento2 = (salario + 50);
			cout << "Novo sal�rio R$ " << aumento2;			
		}
		if (salario >= 450 && salario <= 750){
			aumento3 = (salario + 75);
			cout << "Novo sal�rio R$ " << aumento3;			
		}
		if (salario < 450){
			aumento4 = (salario + 100);
			cout << "Novo sal�rio R$ " << aumento4;
		}
				
	}
	if (opc == 3){
		cout << "Informe o sal�rio: ";
		cin >> salario;	
		if (salario < 450){
			cout << "Mal Remunerado.";
			
		}else 
		cout << "Bem remunerado.";
			
			
			
	}
	if (opc >=4)
		cout << "Op��o invalida, Tente as op��es 1, 2 ou 3.....";	
	
	cin.get ();
	cin.get ();	
}