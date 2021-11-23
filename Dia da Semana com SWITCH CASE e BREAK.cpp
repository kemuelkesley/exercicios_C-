#include <iostream>
using namespace std;
main (){
	//  dia da semana usando switch, case e break.
	
	int n;
	cout << "informe o numero correspondente ao dia da semana: ";
	cin >> n;
	switch (n){
		case 1:
			cout << "Domingo";
			break;
		case 2:
			cout << "Segunda-Feira";
			break;
		case 3:
			cout << "Terca-Feira";
			break;
		case 4:
			cout << "Quarta-Feira";
			break;
		case 5:
			cout << "Quinta-Feira";
			break;
		case 6:
			cout << "Sexta-Feira";
			break;
		case 7:
			cout << "Sabado";
			break;
		default:
			cout << "numero errado" << endl;
	}
}