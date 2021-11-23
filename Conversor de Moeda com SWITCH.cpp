#include <iostream>
using namespace std;
main (){
	// switch and case and default.
	
	float D,  valor,  Cot, opc;
	
	cout << "======================================================" << endl;
	cout << "      Conversor de Moeda [Real e Dolar] Ver: 1.0 " << endl;	
	cout << "======================================================" << endl;
	cout << endl;
	cout << "Para Real  [ 1 ]:" << endl;
	cout << "Para Dolar [ 2 ]:" << endl;
	cout << endl;
	cout << "Informe a opcao: ";
	cin >> opc;

	switch (opc){
		case 1:
				cout << "Informe o valor R$: ";
				cin >> valor;
				Cot = 5.21; //Cota do dolar da época.
				D = (valor*Cot);
				cout << "Valor em Real R$:" << D << endl;  	
				break;
		case 2:
			  	cout << "Informe o valor US$: ";
			    cin >> valor;
		        Cot = 5.21;
		        D = (valor/Cot);
		        cout << "Valor em Real US$:" << D << endl;
				break;
					   
			default;
				cout << "Opcao errada, tente novamente." << endl;
					  		
	}
	

	

}	