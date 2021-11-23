#include <iostream>
using namespace std;
main (){
	int nota1, nota2, media;
	cout << "nota 1: ";
	cin >> nota1;
	cout << "nota 2: ";
	cin >> nota2;
	media = (nota1+nota2)/2;
	cout << "Media final: " << media << endl;
	if (media<6){
		cout << "REPROVADO" << endl;
		cout << "ESTUDE MAIS!!" << endl;
	}else {
		cout << "APROVADO" << endl;
		cout << "PARABENS" << endl;
	}
	
	
	
	cin.get();
	cin.get();
	
	
}