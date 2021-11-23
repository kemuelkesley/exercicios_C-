#include <iostream>
using namespace std;
main (){
	float n1, n2, pontos, simulado, media;
	
	cout << "Nota 1: ";
	cin >> n1;
	cout << "Nota 2: ";
	cin >> n2;
	cout << "Quanto ponto voce ganhou: ";
	cin >> pontos;
	media = (n1+n2)/2;
	cout << "Sua Media: " << media << endl;
	if (media >= 6){
		cout << "Voce foi Aprovado...." << endl;		
	}else {
		cout << "Voce foi Reprovado...." << endl;
	}if (media <=5){
		simulado = pontos + media;
		cout << "Pontos obtidos: " << pontos << endl;
		cout << "Media + pontos extras: " << pontos << endl;
		cout << "Nota da Media + o simulado..: " << simulado << endl;
	}	
	if (simulado >=6){
		cout << "aprovado por pontos extras..." << endl;
	}else {
		cout << "voce nao conseguiu passar mesmo usando os pontos.." << endl;
	}
	
	
	
	
	
}