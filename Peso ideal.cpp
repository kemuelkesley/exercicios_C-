#include <iostream>
using namespace std;
main (){
	float altura, peso, kg; 
	int sexo;
	cout << "informe qual sua altura: ";
	cin >> altura;
	cout << "digite 1 se for homem e 2 se for mulher: ";
	cin >> sexo;
	cout << "Qual seu peso: ";
	cin >> kg;
	if (sexo==1){
		peso = (72.7*altura)-58;
		cout << peso << "KG" << endl;
		cout << "peso ideal para Homem" << endl;
	}else {
		peso = (62.1*altura)- 44.7;
		cout << peso << "KG" << endl;
		cout << "peso ideal para Mulher" << endl;
	}if (kg>=peso){
		cout << "Acima do peso" << endl;
	}else {
		cout << "Esta a baixo do peso!" << endl;
	}
 	cout << peso - kg << " KG precisa perder:";
 	
	 return 0;
		
}

