#include <iostream>

using namespace std;

main (){
	
	// IMC = peso / altura * altura.
	
	

	float peso, IMC, altura;
	
	cout << "informe sua altura: ";
	cin >> altura;
	cout << "informe seu peso: ";
	cin >> peso;
	IMC = peso / (altura * altura);
	cout << endl;
	
	cout << "IMC em adultos" << endl;
	cout << endl << endl;
	cout << "Abaixo de 18,5 < abaixo do peso." << endl;
	cout << "Entre 18,5 a 25 < peso normal. " << endl;
	cout << "Entre 25 e 30 < Acima do peso. " << endl;
	cout << "Acima de 30 < Obeso. " << endl; 
	cout << endl;
	cout << IMC << " Indice de massa corporea." << endl;
	
	if ( IMC < 18.5){
		cout << "abaixo do peso................." << endl;
	}
	if  (IMC > 18.5 && IMC < 25){
		cout << "peso normal...................." << endl;
	}
	if (IMC > 25 && IMC < 30){
		cout << "Acima do peso.................." << endl;
	}
	if (IMC > 30){
		cout << "Obeso..........................." << endl;
	}
	
	
	
	
}