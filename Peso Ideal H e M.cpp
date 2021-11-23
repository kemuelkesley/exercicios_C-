#include <iostream>
using namespace std;
main (){
	// peso ideal homem 72.7*h-58
	// peso ideal mulher 62.1*h-44.7
	int sexo;
	float peso, altura, PESOideal;
	
	
	cout << "informe sua altura: ";
	cin >> altura;
	cout << "informe seu peso: ";
	cin >> peso; 
	cout << endl;
	
	cout << "Se for HOMEM tecle (1). " << endl;
	cout << "Se for MULHER tecle (2)." << endl;
	cout << endl;
	
	cout << "informe o numero (1) ou (2): ";
	cin >> sexo;
	if (sexo == 1){
		PESOideal = (72.7 * altura)-58;
		cout << "Peso ideal para HOMENS: " << PESOideal << " KG" << endl;
	}else {
		PESOideal = (62.1 * altura)-44.7;
		cout << "Peso ideal para MULHERES: " << PESOideal << " KG" << endl;
	}
	
	
	
	
	
	
}
