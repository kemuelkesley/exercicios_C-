#include <iostream>
#include <locale.h>
using namespace std;
main (){

	// programa para salario, imposto e se tem um boa remuneração ou não.


	setlocale(LC_ALL, "Portuguese");
	float salario, por1, por2, por3, aumento1, aumento2, aumento3, aumento4;
	int opc;
	
	cout << "MENU DE OPÇÕES:";
	cout << endl;
	cout << "1 - Imposto" << endl;
	cout << "2 - Novo salário" << endl;
	cout << "3 - Classificação" << endl;
	cout << endl;
	cout << "Escolha a opção desejada (1), (2) ou (3): ";
	cin >> opc; 
	if (opc==1){
		cout << "Informe o salário R$: ";
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
			cout << "Novo salário de R$ " << aumento1;						
		}
		if (salario >= 750 && salario <= 1500){
			aumento2 = (salario + 50);
			cout << "Novo salário R$ " << aumento2;			
		}
		if (salario >= 450 && salario <= 750){
			aumento3 = (salario + 75);
			cout << "Novo salário R$ " << aumento3;			
		}
		if (salario < 450){
			aumento4 = (salario + 100);
			cout << "Novo salário R$ " << aumento4;
		}
				
	}
	if (opc == 3){
		cout << "Informe o salário: ";
		cin >> salario;	
		if (salario < 450){
			cout << "Mal Remunerado.";
			
		}else 
		cout << "Bem remunerado.";
			
			
			
	}
	if (opc >=4)
		cout << "Opção invalida, Tente as opções 1, 2 ou 3.....";	
	
	cin.get ();
	cin.get ();	
}