#include <iostream>
using namespace std;
main (){
//homem peso ideal = 72.7*h-58
//mulher peso ideal = 62.1*h-44.7
	float h, peso, sexo;
	
	cout << "Qual sua altura: ";
	cin >> h;
	cout << "Digite 1 se for homem e 2 se for mulher: ";
	cin >> sexo;
	if (sexo==1){
		peso = (72.7*h)-58;		
	}else {
		peso = (62.1*h)-44.7;
	}
	cout << "Peso ideal: " << peso << "KG" << endl;

}